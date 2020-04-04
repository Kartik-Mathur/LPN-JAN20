// ElephantWays
#include <iostream>
#include <algorithm>
using namespace std;

int ElephantWays(int n,int m){
	int dp[100][100]={0};

	dp[0][0] = 1;
	int val = 1;
	for(int i=1;i<=n;i++){
		dp[i][0] = val;
		val*=2;
	}
	val = 1;
	for(int j=1;j<=m;j++){
		dp[0][j] = val;
		val*=2;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			int sum = 0;
			for(int k=0;k<i;k++){
				sum+=dp[k][j];
			}
			for(int k=0;k<j;k++){
				sum+=dp[i][k];
			}
			dp[i][j] = sum;
		}
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}	
	return dp[n][m];
}

int main(){
	int i,j;
	cin>>i>>j;


	cout<<ElephantWays(i,j)<<endl;

	return 0;
}