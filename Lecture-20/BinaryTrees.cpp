// BinaryTree
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

class Pair{
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root){
	Pair p;
	// Base case
	if(root ==NULL){
		p.height = p.diameter = 0;
		return p;
	}

	// Recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);
	int op1 = left.height+right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	
	p.height = max(left.height,right.height)+1;
	p.diameter = max(op1,max(op2,op3));
	return p;
}

void mirrorTree(node* root){
	// Base case
	if(root == NULL){
		return;
	}

	mirrorTree(root->left);
	mirrorTree(root->right);
	swap(root->left,root->right);

}

node* SearchRecursively(node* root,int key){
	if(root == NULL){
		return NULL;
	}

	if(root->data == key){
		return root;
	}

	node* ans = SearchRecursively(root->left,key);
	if(ans!=NULL){
		return ans;
	}
	ans = SearchRecursively(root->right,key);
	return ans;
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

int main(){

	node* root = CreateBT();
	
	// mirrorTree(root);

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	cout<<"Number of Nodes : "<<countNodes(root)<<endl;
	cout<<"Height of Tree : "<<heightTree(root)<<endl;
	cout<<"diameter of Tree : "<<diameter(root)<<endl;

	// Pair ans = fastDiameter(root);
	// cout<<"Fast Height : "<<ans.height<<endl;
	// cout<<"Fast Diameter : "<<ans.diameter<<endl;

	int key;
	cin>>key;
	node* ans = SearchRecursively(root,key);
	if(ans == NULL){
		cout<<"Not Found"<<endl;
	}
	else{
		cout<<ans->data<<endl;
	}
	LevelOrder(root);

	return 0; 
}
