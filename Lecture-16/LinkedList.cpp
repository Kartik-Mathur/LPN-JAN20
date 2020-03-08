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

node* SearchLL(node *head,int key){

	while(head){
		if(head->data == key){
			return head;
		}
		head=head->next;
	}
	return NULL; // or return head; as head == NULL
}

node *SearchRecursively(node* head,int key){
	// Base case
	if(head == NULL){
		return NULL;
	}
	// Recursive case
	if(head->data == key){
		return head;
	}
	else{
		return SearchRecursively(head->next,key);
	}
}

void DeleteAtFront(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
		return;
	}
	node* temp = head;
	head = head->next;
	delete temp;
}

void DeleteAtEnd(node* &head,node* &tail){
	if(head == NULL){
		return;
	}
	if(head->next == NULL){
		delete head;
		head = tail = NULL;
		return;
	}
	node * temp = head;
	while(temp->next!=tail){
		temp = temp->next;
	}
	delete tail;
	temp->next = NULL;
	tail = temp;
}
int main(){

	node* head=NULL,*tail=NULL;

	for(int i=5;i>=0;i--){
		InsertAtFront(head,tail,i);
	}
	Print(head);
	// cout<<"Length of LL "<<lengthofLL(head)<<endl;
	InsertAtEnd(head,tail,6);
	Print(head);
	DeleteAtEnd(head,tail);
	Print(head);
	DeleteAtFront(head,tail);
	Print(head);
	// cout<<"Length of LL "<<lengthofLL(head)<<endl;
	// InsertAtMid(head,tail,10,0);
	// Print(head);
	// InsertAtMid(head,tail,11,8);
	// Print(head);
	// InsertAtMid(head,tail,12,4);
	// Print(head);
	int key;
	// cout<<"Enter Key : ";
	// cin>>key;
	// node* ans = SearchLL(head,key);
	// if(ans != NULL){
	// 	cout<<"Key Found "<<ans->data<<endl;
	// }
	// else{
	// 	cout<<"Key Not Found "<<endl;
	// }
	// ans = SearchRecursively(head,key);
	// if(ans != NULL){
	// 	cout<<"Key Found "<<ans->data<<endl;
	// }
	// else{
	// 	cout<<"Key Not Found "<<endl;
	// }

	return 0; 
}
