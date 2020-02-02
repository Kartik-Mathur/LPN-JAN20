#include <iostream>
using namespace std;

int main(){
	int a[]={1,5,6,8,11,15,18};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0;i<n;i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	int s = 0;
	int e = n-1;
	int key;
	cin>>key;
	
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid] == key){
			cout<<"Element found at index : "<<mid<<endl;
			break; // return mid;
		}
		else if(key > a[mid]){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
	}
	if(s>e){ // return -1;
		cout<<"Element not found"<<endl;
	}

	return 0;
}
