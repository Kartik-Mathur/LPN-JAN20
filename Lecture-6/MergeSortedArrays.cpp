// MergeSortedArrays
#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;	
}

void MergeArrays(int a[],int b[],int m,int n){
	int i = m-1;
	int j = n-1;
	int k = m+n-1;

	while(i>=0 && j>=0){
		if(a[i]<b[j]){
			a[k] = b[j];
			k--;
			j--;
		}
		else{
			a[k] = a[i];
			k--;
			i--;
		}
	}

	if(j>=0 && i<0){
		while(j>=0){
			a[k]=b[j];
			k--;
			j--;
		}
	}
	else{
		while(i>=0){
			a[k]=a[i];
			i--;
			k--;
		}
	}
}

int main(){
	int a[8]={1,4,5,8,11};
	int b[3]={2,6,12};
	int n = 3;
	int m = 5;

	PrintArray(a,m);
	PrintArray(b,n);

	MergeArrays(a,b,m,n);

	PrintArray(a,m+n);
	return 0;
}