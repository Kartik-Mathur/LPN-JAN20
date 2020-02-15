// isSorted
#include<iostream>
using namespace std;

bool isSorted(int *a,int n){
	// Base case
	if(n==0){
		return true;
	}
	// Recursive case
	bool KyaChotaArraySortedHai = isSorted(a+1,n-1);

	// Badi problem ka solution
	if(KyaChotaArraySortedHai==true && a[0]<=a[1]){
		return true; 
	}
	else{
		return false;
	}
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,8};
	int n=sizeof(a)/sizeof(int);


	if(isSorted(a,n)){
		cout<<"Sorted"<<endl;
	}
	else{
		cout<<"Not Sorted"<<endl;
	}

	return 0;
}