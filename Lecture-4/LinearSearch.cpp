// LinearSearch
#include <iostream>
using namespace std;

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int n = sizeof(a)/sizeof(int);
	int key;
	cout<<"Enter the key ";
	cin>>key;

	int i;
	for(i=0;i<=n-1;i++){
		if(a[i] == key){
			cout<<"Number found at index "<<i<<endl;
			break;
		}
	}

	if(i == n){
		cout<<"Number Not Found"<<endl;
	}




	return 0;
}