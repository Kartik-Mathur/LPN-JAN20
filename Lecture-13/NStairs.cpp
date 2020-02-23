// NStairs
#include<iostream>
using namespace std;

int NStairs(int n){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recrusive case
	return NStairs(n-1)+NStairs(n-2)+NStairs(n-3);
}

int NStairs1(int n,int k=3){
	// Base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	// Recursive steps
	int sum = 0;
	for(int i=1;i<=k;i++){
		sum += NStairs1(n-i,k);
	}
	return sum;
}

int main(){

	int n;
	cin>>n;
	cout<<NStairs(n)<<endl;
	cout<<NStairs1(n)<<endl;



	return 0; 
}
