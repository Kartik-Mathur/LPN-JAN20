#include <iostream>
#include "Nodes.h"
using namespace std;

template<typename T>
class Stack{
	node<T>* head;
public:
	Stack(){
		head = NULL;
	}

	void push(T d){
		if(head == NULL){
			head = new node<T>(d);
			return;
		}
		node<T>* n = new node<T>(d);
		n->next = head;
		head = n;
	}

	void pop(){
		if(head == NULL){
			return;
		}
		node<T>* temp = head;
		head = head->next;
		delete temp;
	}

	bool empty(){
		return head == NULL;
	}

	T top(){
		return head->data;
	}
};