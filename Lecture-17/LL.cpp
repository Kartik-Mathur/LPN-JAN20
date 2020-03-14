// LinkedList
#include<iostream> 
using namespace std;
class node{
public:
	int data;
	node* next;

	node(int d):data(d),next(NULL){

	}
};

void InsertAtFront(node* &head,int data){
	if(head == NULL){
		head = new node(data);
		return;
	}

	node* n = new node(data);
	n->next = head;
	head = n;
}

void PrintLL(node* head){
	while(head){
			cout<<head->data<<"-->";
			head=head->next;
	}
	cout<<"NULL"<<endl;	
}

node* mid(node* head){
	node* slow=head;
	node* fast = head->next;

	while(fast!=NULL && fast->next!=NULL){
		fast=fast->next->next;
		// when fast takes two steps then slow will take one step
		slow = slow->next;
	}
	return slow;
}

node* merge(node* h1,node* h2){
	// Basecase
	if(h1==NULL){
		return h2;
	}
	if(h2 == NULL){
		return h1;
	}
	// Recursive case
	node* newHead = NULL;
	if(h1->data<h2->data){
		newHead = h1;
		newHead->next = merge(h1->next,h2);
	}
	else{
		newHead = h2;
		newHead->next = merge(h1,h2->next);
	}
	return newHead;
}

node* mergeSortLL(node* head){
	// Base case
	if(head == NULL || head->next == NULL){
		return head;
	}

	// 1. Divide
	node* m = mid(head);
	node* h1 = head;
	node* h2 = m->next;
	m->next = NULL;

	// 2. Sort
	h1 = mergeSortLL(h1);
	h2 = mergeSortLL(h2);

	// 3. merge
	node* newhead = merge(h1,h2);
	return newhead;
}


int main(){
	node* head = NULL;
	node* head1 = NULL;

	InsertAtFront(head,8);
	InsertAtFront(head,5);
	InsertAtFront(head,6);
	InsertAtFront(head,5);
	InsertAtFront(head,2);
	InsertAtFront(head,0);
	InsertAtFront(head,3);
	InsertAtFront(head,1);
	PrintLL(head);
	head = mergeSortLL(head);

	// InsertAtFront(head1,10);
	// InsertAtFront(head1,9);
	// InsertAtFront(head1,6);
	// InsertAtFront(head1,3);
	// InsertAtFront(head1,2);
	// InsertAtFront(head1,0);
	
	// PrintLL(head1);
	PrintLL(head);

	// node* ans = merge(head,head1);
	// PrintLL(ans);
	

	return 0; 
}
