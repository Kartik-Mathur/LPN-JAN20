// ArraySumFunctions
#include <iostream>
using namespace std;
int sum1(int a[],int n){
	int ans = 0;

	for(int i=0;i<n;i++){
		ans += a[i];
	}

	return ans;
}

int main(){
	int arr[]={1,6,5,4,8,9,0,-1,-2,-4};
	int n = sizeof(arr)/sizeof(int);

	cout<<sum1(arr,n)<<endl;
	return 0;
}