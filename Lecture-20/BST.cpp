// BST
#include<iostream> 
#include <queue>
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

int main(){

	node* root = BuildBST();

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	LevelOrder(root);

	return 0; 
}

