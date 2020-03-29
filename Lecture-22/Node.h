#include <iostream>
using namespace std;

class node{
public:
	string key;
	int data;
	node* next;
	node(string k,int d){
		key = k;
		data = d;
	}
};