// Arrays
#include <iostream>
using namespace std;

int main(){

	int a[1000];
	int n;

	cout<<"Enter N ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}


	// int a[100]={0,1,2,3,4,5,6,7,8,9};

	// for(int i=0;i<10;i++){
	// 	cout<<a[i]<<endl;
	// }




	return 0;
}