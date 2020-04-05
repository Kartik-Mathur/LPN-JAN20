// Knapsack
#include <iostream>
#include <algorithm>
using namespace std;

int Knapsack(int *price,int *weight,int n,int capacity){
	if(n == 0 || capacity == 0){
		return 0;
	}
	int inc = 0,exc = 0;
	
	if(capacity>=weight[n-1]){
		inc = price[n-1]+Knapsack(price,weight,n-1,capacity-weight[n-1]);
	}

	exc = 0 + Knapsack(price,weight,n-1,capacity);

	return max(inc,exc);
}

int topDown(int *price,int *weight,int n,int capacity,int dp[][10]){
	if(n==0||capacity ==0){
		dp[n][capacity] = 0;
		return 0;
	}
	if(dp[n][capacity]!=-1){
		return dp[n][capacity];
	}

	int inc=0,exc=0;
	if(capacity>=weight[n-1]){
		inc = price[n-1]+topDown(price,weight,n-1,capacity-weight[n-1],dp);
	}
	exc = 0 + topDown(price,weight,n-1,capacity,dp);
	dp[n][capacity] = max(inc,exc);
	return dp[n][capacity];
}

int bottomUp(int *price,int *weight,int n,int cap){
	int dp[100][100] = {0};

	for(int N=1;N<=n;N++){
		for(int capacity=1;capacity<=cap;capacity++){
			int inc=0,exc=0;
			if(capacity>=weight[N-1]){
				inc = price[N-1]+dp[N-1][capacity-weight[N-1]];
			}
			exc = 0+dp[N-1][capacity];
			dp[N][capacity] = max(inc,exc);
		}
	}
	for(int N=1;N<=n;N++){
		for(int capacity=1;capacity<=cap;capacity++){
			cout<<dp[N][capacity]<<' ';
		}
		cout<<endl;
	}
	return dp[n][cap];
}

int main(){
	int price[] = {4,3,6,2};
	int weight[] = {2,3,3,2};
	int dp[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			dp[i][j]=-1;
		}
	}

	cout<<Knapsack(price,weight,4,6)<<endl;
	cout<<topDown(price,weight,4,6,dp)<<endl;
	cout<<bottomUp(price,weight,4,6)<<endl;

	return 0;
}