#include <iostream>
using namespace std;

int Fibo(int n){
	if(n==0 || n==1){
		return n;
	}

	return (Fibo(n-1)+Fibo(n-2));
}

int fib(int n,int *dp){
	if(n==0||n==1){
		dp[n] = n;
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans = fib(n-1,dp)+fib(n-2,dp);
	dp[n] = ans;
	return ans;
}

int BottomUp(int n){
	int *dp = new int[n+1];
	dp[0] = 0;
	dp[1] = 1;

	for(int i=2;i<=n;i++){
		dp[i] = dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main(){

	int n;
	cin>>n;
	int *dp = new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}

	cout<<fib(n,dp)<<endl;
	cout<<BottomUp(n)<<endl;
	cout<<Fibo(n)<<endl;
	return 0;
}