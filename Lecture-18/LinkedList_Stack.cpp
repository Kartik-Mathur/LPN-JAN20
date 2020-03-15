// LinkedList_Stack
#include<iostream> 
#include "Stack.h"
using namespace std;

int main(){
	// stack<char> s;
	Stack<char> s;
	
	s.push('A');
	s.push('B');
	s.push('C'); 
	s.push('D'); 
	s.push('E'); 

	while(!s.empty()){ 
		cout<<s.top()<<" "; 
		s.pop(); 
	}
	cout<<endl;

	return 0; 
}
