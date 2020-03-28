// TopKElements
#include<iostream> 
#include <queue>
using namespace std;

class Meracomparator{
public:
	bool operator()(int a,int b){
		return a>b;
	}
};

void Print(priority_queue<int,vector<int>,Meracomparator> h){
	while(!h.empty()){
		cout<<h.top()<<' ';
		h.pop();
	}
	cout<<endl;
}

int main(){

	priority_queue<int,vector<int>,Meracomparator> h;

	int count = 0;
	int k = 3;
	int n;
	while(true){
		cin>>n;
		if(n == -1){
			// Print the top k numbers 
			Print(h);
		}
		else{
			// Keep taking the numbers input
			if(count<k){
				h.push(n);
				count++;
			}
			else{
				if(h.top() < n){
					h.pop();
					h.push(n);
				}
			}
		}
	}


	return 0; 
}
