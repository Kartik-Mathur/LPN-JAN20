// BinarySearch
#include<iostream>
using namespace std;

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

void BubbleSort(int *a,int n,int i,int j){
	// Base case
	if(i==n-1){
		return;
	}
	if(j==n-1){
		BubbleSort(a,n,i+1,0);
	}
	else{
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
		BubbleSort(a,n,i,j+1);
	}
	
}


int BinarySearch(int *a,int s,int e,int key){
	if(s>e){
		return -1;
	}

	int mid=(s+e)/2;
	if(a[mid] == key){
		return mid;
	}
	else if(key>a[mid]){
		return BinarySearch(a,mid+1,e,key);
	}
	else{
		return BinarySearch(a,s,mid-1,key);
	}
}

int main(){

	int a[]={5,4,3,2,1,8,7,6,5,0};
	int n = sizeof(a)/sizeof(int);

	BubbleSort(a,n,0,0);
	Print(a,n);
	
	int key;
	cin>>key;
	cout<<BinarySearch(a,0,n-1,key)<<endl;



	return 0;
}