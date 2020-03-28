// Heap_Inbuilt
#include<iostream> 
#include <queue>
#include <vector>
#include <functional>
using namespace std;

class Meracomparator{
public:
	bool operator()(int a,int b){
		return a<b;
	}
};


int main(){

	priority_queue<int,vector<int>,Meracomparator> h;
	// priority_queue<int,vector<int>,greater<int> > h;

	h.push(10);
	h.push(1);
	h.push(2);
	h.push(5);
	h.push(8);
	h.push(7);
	h.push(4);

	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}



	return 0; 
}
