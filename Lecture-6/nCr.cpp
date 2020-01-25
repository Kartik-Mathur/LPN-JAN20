// nCr
#include <iostream>
using namespace std;

int fact(int n){
	int ans = 1;

	for(int i=1;i<=n;i++){
		ans *= i;
	}
	return ans;
}

int nCr(int n,int r){
	int a = fact(n);
	int b = fact(r);
	int c = fact(n-r);

	int ans = (a)/(b*c);
	return ans;
}


int main(){

	int n;
	cin>>n;

	cout<<nCr(5,2)<<endl;

	return 0;
}