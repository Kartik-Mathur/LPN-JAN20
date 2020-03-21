// BinaryTree
#include<iostream> 
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

node* CreateBT(){

	int data;
	cin>>data;

	if(data == -1){
		return NULL;
	}

	node* root = new node(data);

	root->left = CreateBT();
	root->right = CreateBT();

	return root;
}
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

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

void postorder(node* root){
	if(root==NULL){
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int countNodes(node* root){
	if(root == NULL){
		return 0;
	}

	// int left_count = countNodes(root->left);
	// int right_count = countNodes(root->right);
	return countNodes(root->left)+countNodes(root->right)+1;
}

int heightTree(node* root){
	if(root == NULL){
		return 0;
	}

	int left = heightTree(root->left);
	int right = heightTree(root->right);
	return max(left,right)+1;
}

int diameter(node* root){
	if(root == NULL){
		return 0;
	}

	int op1 = heightTree(root->left) + heightTree(root->right);
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1,max(op2,op3));
}

int main(){

	node* root = CreateBT();

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	cout<<"Number of Nodes : "<<countNodes(root)<<endl;
	cout<<"Height of Tree : "<<heightTree(root)<<endl;
	cout<<"diameter of Tree : "<<diameter(root)<<endl;


	return 0; 
}
