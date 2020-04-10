// Tries
#include <iostream>
#include <unordered_map>
using namespace std;

class node{
public:
	char data;
	bool isTerminal;
	unordered_map<char,node*> h;

	node(char d){
		data =d;
		isTerminal = false;
	}
};

class Trie{
	node* root;
public:
	Trie(){
		root = new node('\0');
	}

	void insert(char *in){
		node* temp = root;
		for(int i=0;in[i]!='\0';i++){
			char ch = in[i];
			if(temp->h.count(ch)){
				temp = temp->h[ch];
			}
			else{
				temp->h[ch] = new node(ch);
				temp = temp->h[ch];
			}
		}
		temp->isTerminal = true;
	}

	bool search(char *key){

		node* temp = root;
		for(int i=0;key[i]!='\0';i++){
			char ch = key[i];
			if(temp->h.count(ch) == 0){
				return false;
			}
			else{
				temp = temp->h[ch];
			}
		}
		return temp->isTerminal;
	}
};


int main(){
	Trie t;

	t.insert("Hello");
	t.insert("Hell");
	t.insert("Hel");
	t.insert("Hellos");
	t.insert("Coding");
	t.insert("Code");

	while(true)
	{
		char a[100];
		cin>>a;
		if(t.search(a)){
			cout<<"Found"<<endl;
		}
		else{
			cout<<"Not Found"<<endl;
		}
	}

	

	return 0;
}