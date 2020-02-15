// CalculateSum
#include<iostream>
using namespace std;

int ArraySum(int *a,int n){
	if(n==0){
		return 0;
	}

	return a[0]+ArraySum(a+1,n-1);
}

int Sum(int *a,int n,int i){
	if(i==n){
		return 0;
	}

	int ChotaArraySum = Sum(a,n,i+1);
	int BadaArraySum = ChotaArraySum+a[i];
	return BadaArraySum;
}

int Sum1(int *a,int n){
	if(n==0){
		return 0;
	}

	return a[n-1]+Sum1(a,n-1);
}

int main(){
	int a[]={1,2,3,4,5,6,7,8,9};
	int n=sizeof(a)/sizeof(int);


	cout<<ArraySum(a,n)<<endl;
	cout<<Sum(a,n,0)<<endl;
	cout<<Sum1(a,n)<<endl;



	return 0;
}