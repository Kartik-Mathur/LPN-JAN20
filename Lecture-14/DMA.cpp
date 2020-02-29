// DynamicMemory
#include<iostream> 
using namespace std;

int* createArray(int n){
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		arr[i] = i;
	}

	return arr;
}

void Print(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;

}

int main(){
	int *a = new int;

	*a = 10;
	cout<<*a<<endl;

	float *f = new float;
	*f = 10.11;
	cout<<*f<<endl;

	int n;
	cin>>n;
	int *arr1 = createArray(n);
	Print(arr1,n);
	// delete []arr1;
	arr1 = NULL;
	// arr1 = new int[1000000]; 

	return 0; 
}
