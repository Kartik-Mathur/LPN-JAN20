// StackUsingQueues
#include<iostream> 
#include<queue>
using namespace std;

class Stack{
	queue<int> q1;
	queue<int> q2;
public:
	void push_back(int d){
		if(q1.empty() && q2.empty()){
			q1.push(d);
		}
		else if(!q1.empty() && q2.empty()){
			q1.push(d);
		}
		else{
			q2.push(d);
		}
	}

	void pop_back(){
		if(q1.empty() && q2.empty()){
			cout<<"Underflow"<<endl;
			return;
		}
		else if(!q1.empty() && q2.empty()){
			while(q1.size()!=1){
				q2.push(q1.front());
				q1.pop();
			}
			q1.pop();
		}
		else{
			while(q2.size()!=1){
				q1.push(q2.front());
				q2.pop();
			}
			q2.pop();
		}
	}

	int top(){
		if(!q1.empty() && q2.empty()){
			while(q1.size()!=1){
				q2.push(q1.front());
				q1.pop();
			}
			int temp = q1.front();
			q1.pop();
			q2.push(temp);
			return temp;
		}
		else{
			while(q2.size()!=1){
				q1.push(q2.front());
				q2.pop();
			}
			int temp = q2.front();
			q2.pop();
			q1.push(temp);
			return temp;
		}
	}

	bool empty(){
		if(q1.empty() && q2.empty()){
			return true;
		}
		else{
			return false;
		}
	}
};

int main(){
	Stack s;

	s.push_back(1);
	s.push_back(2);
	s.push_back(3);
	s.push_back(4);
	s.pop_back();
	s.push_back(5);

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop_back();
	}
	cout<<endl;


	return 0; 
}
