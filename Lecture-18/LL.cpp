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

void CreateCycle(node* head){
	node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next = head->next->next;
}

bool isCyclic(node* head){
	node* fast=head,*slow=head;

	while(fast && fast->next){
		fast=fast->next->next;
		slow=slow->next;

		if(fast == slow){
			return true;
		}
	}
	return false;
}

void BreakCycle(node* head){

	node* fast,*slow;
	slow=fast=head;
	while(fast){
		fast=fast->next->next;
		slow=slow->next;
		if(fast == slow){
			break;
		}
	}

	// Here fast == slow, is confirmed
	slow = head;
	node* p = head;
	while(p->next!=fast){
		p=p->next;
	}

	while(fast!=slow){
		slow=slow->next;
		p=fast;
		fast=fast->next;
	}
	p->next = NULL;
}


int main(){
	node* head = NULL;

	InsertAtFront(head,8);
	InsertAtFront(head,7);
	InsertAtFront(head,6);
	InsertAtFront(head,5);
	InsertAtFront(head,4);
	InsertAtFront(head,3);
	InsertAtFront(head,2);
	InsertAtFront(head,1);

	CreateCycle(head);
	if(!isCyclic(head)){
		PrintLL(head);
	}
	else{
		BreakCycle(head);
		cout<<"Cycle exists"<<endl;
		cout<<"After Breaking the Cycle"<<endl;
		PrintLL(head);
	}
	


	return 0; 
}
