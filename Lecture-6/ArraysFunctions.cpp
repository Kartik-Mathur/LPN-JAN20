// ArraysFunctions
#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	arr[0] = 2100;
	arr[2] = 2200;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;	
}
int main(){
	int a[]={5,4,3,6,8,7,1};
	int n = sizeof(a)/sizeof(int);
	PrintArray(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;	
	return 0;
}
