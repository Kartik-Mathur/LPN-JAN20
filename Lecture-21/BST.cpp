// BST
#include<iostream>
#include <queue> 
#include <climits>
using namespace std;

class node{
public:
	int data;
	node* left;
	node* right;
	
	node(int d){
		data =d;
		left=right=NULL;
	}
};


node* InsertInBST(node* root,int data){
	if(root ==NULL){
		root = new node(data);
		return root;
	}

	if(root->data>data){
		root->left = InsertInBST(root->left,data);
	}
	else{
		root->right = InsertInBST(root->right,data);
	}
	return root;
}

node* BuildBST(){
	node* root=NULL;

	int data;
	cin>>data;

	if(data==-1){
		return root;
	}
	while(data!=-1){
		root = InsertInBST(root,data);

		cin>>data;
	}
	return root;
}

void preorder(node* root){
	if(root == NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(node* root){
	if(root == NULL){
		return;
	}

	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void LevelOrder(node* root){
	queue<node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()){
		node* n = q.front();
		q.pop();

		if( n == NULL ){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			cout<<n->data<<" ";
			if(n->left){
				q.push(n->left);
			}
			if(n->right){
				q.push(n->right);
			}
		}
	}
}

void postorder(node* root){
	if(root==NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

bool isBST(node* root,int left=INT_MIN,int right = INT_MAX){
	if(root == NULL){
		return true;
	}

	if(root->data>=left && root->data<=right && isBST(root->left,left,root->data) && isBST(root->right,root->data,right) ){
		return true;
	}
	else{
		return false;
	}
}

class Pair{
public:
	int height;
	bool balanced;
};

Pair isBalanced(node* root){
	Pair p;
	// bAse case
	if(root == NULL){
		p.balanced = true;
		p.height = 0;
		return p;
	}
	// Recursive case
	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	
	p.height = max(left.height,right.height)+1;
	if(abs(left.height-right.height)<=1 && left.balanced == true && right.balanced == true){
		p.balanced = true;
	}
	else{
		p.balanced = false;
	}
	return p;
}

node* CreateBST(int *arr,int s,int e){
	// Base case
	if(s>e){
		return NULL;
	}

	// Recursive case
	int mid = (s+e)/2;
	node* root = new node(arr[mid]);
	root->left = CreateBST(arr,s,mid-1);
	root->right = CreateBST(arr,mid+1,e);
	return root;
}

class LinkedList{
public:
	node* head;
	node* tail;
};

LinkedList BSTtoLL(node* root){
	LinkedList l;
	// Base case
	if(root==NULL){
		l.head = l.tail = NULL;
		return l;
	}

	// Recursive case
	if(root->left ==NULL && root->right ==NULL){
		l.head = l.tail = root;
	}
	else if(root->left!=NULL && root->right == NULL){
		LinkedList left = BSTtoLL(root->left);
		left.tail ->right = root;
		l.head = left.head;
		l.tail = root;
	}
	else if(root->left==NULL && root->right != NULL){
		LinkedList right =BSTtoLL(root->right);
		root->right = right.head;
		l.head = root;
		l.tail = right.tail;
	}
	else{
		LinkedList left = BSTtoLL(root->left);
		LinkedList right = BSTtoLL(root->right);
		left.tail ->right = root;
		root->right = right.head;
		l.head = left.head;
		l.tail = right.tail;
	}

	return l;
}

void Print(node* head){
	while(head){
		cout<<head->data<<"-->";
		head = head->right;
	}
	cout<<"NULL"<<endl;
}

int main(){
	// int arr[]={1,3,4,5,8,9};
	// int n =sizeof(arr)/sizeof(int);

	node* root = BuildBST();
	// node* root = CreateBST(arr,0,n-1);

	// preorder(root);
	// cout<<endl;
	// inorder(root);
	// cout<<endl;
	// postorder(root);
	// cout<<endl;
	LevelOrder(root);
	LinkedList l = BSTtoLL(root);
	Print(l.head);

	// Pair ans = isBalanced(root);
	// if(ans.balanced){
	// 	cout<<"balanced"<<endl;
	// 	cout<<ans.height<<endl;
	// }
	// else{
	// 	cout<<"Not balanced"<<endl;
	// 	cout<<ans.height<<endl;
	// }

	// if(isBST(root)){
	// 	cout<<"BST"<<endl;
	// }
	// else{
	// 	cout<<"Not a BST"<<endl;
	// }

	return 0; 
}

