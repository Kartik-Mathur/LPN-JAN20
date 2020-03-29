#include <iostream>
#include "Node.h"
using namespace std;

class Hashmap{
	node** arr;
	int ts;
	int cs;
	////////////// HASH FUNCTION ////////////////////
	int hashFn(string key){
		int ans = 0;
		int mul  = 1;
		for(int i=0;key[i]!='\0';i++){
			ans += ((key[i]%ts)*(mul%ts))%ts;
			mul *= 37;
			mul %= ts; 
		}
		ans = ans%ts;
		return ans;
	}

	//////////////////////// REHASH //////////////////////////
	void rehash(){
		node** oldarr = arr;
		int oldts = ts;

		arr = new node*[2*ts];
		ts *= 2;
		cs = 0;
		
		for(int i=0;i<ts;i++){
			arr[i] = NULL;
		}

		// Insert the data into the new table
		for(int i=0;i<oldts;i++){
			node* head = oldarr[i];
			while(head){
				insert(head->key,head->data);
				head = head->next;
			}
		}
		delete []oldarr;
	}

public:
	Hashmap(int s = 7){
		arr = new node*[s];
		ts = s;
		cs = 0;

		// Initialize every bucket with NULL value
		for(int i = 0;i<s;i++){
			arr[i] = NULL;
		}
	}
	
	void insert(string key,int value){
		int i = hashFn(key); // Get the hashindex first
		node* n = new node(key,value);
		n->next = arr[i];
		arr[i] = n;
		cs++;

		if(cs/(1.0*ts) >0.6){
			rehash();
		}
	}

	void Print(){

		for(int i=0;i<ts;i++){
			cout<<i<<"->";
			node* head = arr[i];
			while(head){
				cout<<head->key<<" ";
				head = head->next;
			}
			cout<<endl;
		}
	}


};


int main(){

	Hashmap h;

	h.insert("Mango",100);
	h.insert("Apple",120);
	h.insert("Banana",50);
	h.insert("Kiwi",80);
	h.insert("Guava",60);

	h.Print();


	return 0;
}