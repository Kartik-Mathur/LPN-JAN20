// CheckPrime
#include <iostream>
using namespace std;


int main(){
	/*
	This is 
	a multi line
	comment
	*/
	int n;
	cin>>n;

	int i = 2; // initialization
	while(i<=n-1){ // condn
		if(n%i == 0){
			// Prime nahi hoga number n
			cout<<"Not Prime"<<endl;
			break;
			// return 0; // exit
		}

		i = i +1; // updation
	}

	if(i==n){
		cout<<"Prime"<<endl;
	}

	// Yaha 1-5 numbers print krne hai
	int k = 5;
	while(k<=10){
		cout<<k<<endl;

		k=k+1;
	}



	return 0; // exit
}