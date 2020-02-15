// PrintNumbers
#include<iostream>
using namespace std;

void PrintNumbers(int n){
	// Base case
	if(n==0){
		return;
	}

	// Recursive case
	PrintNumbers(n-1);
	cout<<n<<' ';
}


int main(){
	int n;
	cin>>n;

	PrintNumbers(n);


	cout<<endl;

	return 0;
}