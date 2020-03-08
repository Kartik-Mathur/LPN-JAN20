// LinkedList
#include<iostream> 
using namespace std;

class node{
public:
	int data;
	node* next;

	node(int d){
		data = d;
		next = NULL;
	}
};

int lengthofLL(node *head){
	int count = 0;
	while(head){

		count++;
		head = head->next;
	}
	return count;
}

void InsertAtFront(node* &head,node* &tail,int data){
	if(head == NULL){
		head = tail = new node(data);
	}
	else{
		node* n = new node(data);
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head,node* &tail,int data){
	if(head == NULL){
		head = tail = new node(data);
		return;
	}
	node* n = new node(data);
	tail->next = n;
	tail = n;
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}

void InsertAtMid(node* &head,node* &tail,int data,int pos){
	if( pos == 0){
		InsertAtFront(head,tail,data);
		return;
	}
	if(pos>=lengthofLL(head)-1){
		InsertAtEnd(head,tail,data);
		return;
	}

	node* temp = head;
	int jump = 1;
	while(jump<=pos-1){
		temp =temp->next;
		jump++;
	}
	node* n = new node(data);
	n->next=temp->next;
	temp->next = n;
}


int main(){

	node* head=NULL,*tail=NULL;

	for(int i=5;i>=0;i--){
		InsertAtFront(head,tail,i);
	}
	Print(head);
	cout<<"Length of LL "<<lengthofLL(head)<<endl;
	InsertAtEnd(head,tail,6);
	Print(head);
	cout<<"Length of LL "<<lengthofLL(head)<<endl;
	InsertAtMid(head,tail,10,0);
	Print(head);
	InsertAtMid(head,tail,11,8);
	Print(head);
	InsertAtMid(head,tail,12,4);
	Print(head);


	return 0; 
}
