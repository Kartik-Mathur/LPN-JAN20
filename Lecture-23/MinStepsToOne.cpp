// MinStepsToOne
#include <iostream>
#include<climits>
using namespace std;

int MinStepsToOne(int n){
	if(n==1){
		return 0;
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1 = MinStepsToOne(n-1);
	if(n%2 == 0){
		op2 = MinStepsToOne(n/2);
	}
	if(n%3 == 0){
		op3 = MinStepsToOne(n/3);
	}

	int ans = min(op1,min(op2,op3))+1;
	return ans;
}

int topDown(int n,int *dp){
	if(n==1){
		dp[n] = 0;
		return 0;
	}
	
	if(dp[n]!=-1){
		return dp[n];
	}

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1 = topDown(n-1,dp);
	if(n%2 == 0){
		op2 = topDown(n/2,dp);
	}
	if(n%3 == 0){
		op3 = topDown(n/3,dp);
	}

	int ans = min(op1,min(op2,op3))+1;
	dp[n] = ans;
	return ans;
}	

int main(){
	int n;
	cin>>n;

	int *dp = new int[n+1];
	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}
	
	cout<<topDown(n,dp)<<endl;
	cout<<MinStepsToOne(n)<<endl;

	return 0;
}