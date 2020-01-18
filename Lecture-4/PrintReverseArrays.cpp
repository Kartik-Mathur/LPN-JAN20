// PrintReverseArrays
#include <iostream>
#include <climits>
using namespace std;

int main(){

	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(int);
	// int largest = INT_MIN; // INT_MAX=2^31-1

	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<endl;
	}

	return 0;
}
