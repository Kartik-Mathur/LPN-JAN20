// CostofMatrix
#include <iostream>
#include <algorithm>
using namespace std;
int bottomUp(int cost[][10],int n){
	int dp[10][10]={0};

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i == 0 && j == 0){
				dp[i][j] = cost[i][j];
			}
			else if(i==0 && j>0){
				dp[i][j] = dp[i][j-1]+cost[i][j];
			}
			else if(i>0 && j==0){
				dp[i][j] = dp[i-1][j]+cost[i][j];
			}
			else{
				dp[i][j] = min(dp[i-1][j],dp[i][j-1])+cost[i][j];
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
	return dp[n-1][n-1];	
}
int main(){
	int cost[10][10]={
		{1,2,4,8},
		{1,1,4,2},
		{1,0,6,3},
		{1,0,1,1}
	};
	int n = 4;

	cout<<bottomUp(cost,n)<<' ';


	return 0;
}