// 
#include <iostream>
using namespace std;

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	cout<<endl;	
}

void SelectionSort(int a[],int n){

	for(int i=0;i<n-1;i++){
		
		int min = i;
		for(int j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min = j;
			}
		}
		swap(a[i],a[min]);
	}	

}

int main(){
	int arr[]={1,6,5,4,8,9,0,-1,-2,-4};
	int n = sizeof(arr)/sizeof(int);

	PrintArray(arr,n);
	SelectionSort(arr,n);
	PrintArray(arr,n);
	return 0;
}