// Heap
#include<iostream> 
#include <vector>
using namespace std;

class Minheap{
	vector<int> v;
	
	void heapify(int i){
		int min = i;
		int left = 2*i;
		int right=left +1;

		if(left<v.size() && v[min]>v[left]){
			min = left;
		}
		if(right<v.size() && v[min]>v[right]){
			min = right;
		}

		if(min != i){
			swap(v[min],v[i]);
			heapify(min);
		}
	}

public:
	Minheap(){
		v.push_back(-1);
	}

	void push(int data){
		v.push_back(data);
		int c = v.size()-1;
		int p = c/2;

		while(c>1){
			if(v[p]>v[c]){
				swap(v[p],v[c]);
				c = p;
				p /= 2;
			}
			else{
				break;
			}
		}
	}

	void pop(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();

		heapify(1);
	}

	int top(){
		return v[1];
	}

	bool empty(){
		return v.size() == 1;
	}
};


int main(){

	Minheap h;

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
