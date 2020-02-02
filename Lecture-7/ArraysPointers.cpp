// ArraysPointers
#include <iostream>
using namespace std;

int Print(int *a,int n){
	int sum =0;
	for(int i=0;i<n;i++){
		sum+=*(a+i);
	}
	return sum;
}

int main(){
	
	int a[]={1,3,4,5,6,7,8,9,10};
	int n = sizeof(a)/sizeof(int);

	Print(a,n);

	return 0;
}