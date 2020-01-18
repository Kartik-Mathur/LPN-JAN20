// LargestArray
#include <iostream>
#include <climits>
using namespace std;

int main(){
	int a[10000];
	int n;

	cout<<"Enter the N ";
	cin>>n;

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int largest = INT_MIN;

	for(int i=0;i<n;i++){
		if(a[i]>largest){
			largest = a[i];
		}
	}
	cout<<"Largest "<<largest<<endl;








	return 0;
}