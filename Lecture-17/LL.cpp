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

int main(){
	node* head = NULL;

	for(int i=0;i<6;i++){
		InsertAtFront(head,i);
	}
	PrintLL(head);

	return 0; 
}
