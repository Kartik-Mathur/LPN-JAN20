// ElephantWays
#include<iostream>
using namespace std;

int ElephantWays(int i,int j){
	if(i==0&&j==0){
		return 1;
	}
	// Recursive case
	int sum = 0;
	for(int k=0;k<i;k++){
		sum+=ElephantWays(k,j);
	}
	for(int k=0;k<j;k++){
		sum+=ElephantWays(i,k);
	}
	return sum;
}

int main(){
	int i,j;
	cin>>i>>j;
	cout<<ElephantWays(i,j)<<endl;



	return 0; 
}
