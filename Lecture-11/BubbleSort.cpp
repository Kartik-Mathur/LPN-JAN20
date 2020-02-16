#include<iostream>
using namespace std;

void Print(int *a,int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

// void BubbleSort(int *a,int n,int i){
// 	// Base case
// 	if(i==n-1){
// 		return;
// 	}

// 	for(int j=0;j<=n-2;j++){
// 		if(a[j]>a[j+1]){
// 			swap(a[j],a[j+1]);
// 		}
// 	}
// 	BubbleSort(a,n,i+1);
// }

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
int main(){

	int a[]={5,4,3,2,1,8,7,6,5,0};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);
	BubbleSort(a,n,0,0);
	Print(a,n);




	return 0;
}