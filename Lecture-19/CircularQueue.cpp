// CircularQueue
#include<iostream> 
using namespace std;

class Queue{
	int *arr;
	int n;
	int cs;
	int f;
	int r;
public:
	Queue(int s=5){
		arr = new int[s];
		n = s;
		cs =0;
		f = 0;
		r = n-1;
	}

	void push(int d){
		if(cs == n){
			cout<<"Overflow"<<endl;
			return;
		}
		r = (r+1)%n;
		arr[r] = d;
		cs++;
	}

	void pop(){
		if(cs>0){
			f = (f+1)%n;
			cs--;
		}
		else{
			cout<<"Underflow"<<endl;
		}
	}
	
	bool empty(){
		return cs == 0;
	}

	int size(){
		return cs;
	}

	int front(){
		return arr[f];
	}
};

int main(){

	Queue q;


	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);

	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	q.pop();


	return 0; 
}
	