// Factorial
#include<iostream>
using namespace std;

int fact(int n){
	// Base case
	if(n==0){
		return 1;
	}

	return n*fact(n-1);
	// Recursive case
	// int chotiProblem = fact(n-1);// this is assumption ki answer mill jaega


	// // Find the solution
	// int BadiProblem = n*chotiProblem;
	// return BadiProblem;
}


int main(){
	int n;
	cin>>n;

	cout<<fact(n)<<endl;




	return 0;
}