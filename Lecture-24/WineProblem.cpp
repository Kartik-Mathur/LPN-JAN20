// WineProblem
#include <iostream>
#include <algorithm>
using namespace std;

int WineProblem(int* price,int l,int r,int day){
	if(l>r){
		return 0;
	}

	int op1 = price[l]*day+WineProblem(price,l+1,r,day+1);
	int op2 = price[r]*day+WineProblem(price,l,r-1,day+1);
	return max(op1,op2);
}

int topDown(int* price,int l,int r,int day,int dp[][10]){
	if(l>r){
		dp[l][r] = 0;
		return 0;
	}
	if(dp[l][r]!=-1){
		return dp[l][r];
	}

	int op1 = price[l]*day + topDown(price,l+1,r,day+1,dp);
	int op2 = price[r]*day + topDown(price,l,r-1,day+1,dp);
	dp[l][r] = max(op1,op2);
	return dp[l][r];
}

int bottomUp(int *price,int n){
	int dp[100][100]={0};

	for(int i=n-1;i>=0;i--){
		for(int j=1;j<n;j++){
			if(i>j){
				dp[i][j] = 0;
			}
			else{
				int day = n-(j-i);
				int op1 = price[i]*day+dp[i+1][j];

				int op2;
				if(j-1>=0){
					op2 = price[j]*day + dp[i][j-1];
				}
				else{
					op2 = price[j]*day;
				}

				dp[i][j] = max(op1,op2);
				// dp[i][j] = max(price[i]*(n-(j-i))+dp[i+1][j],price[j]*(n-(j-i))+dp[i][j-1]);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<' ';
		}
		cout<<endl;
	}
	cout<<endl;
	return dp[0][n-1];
}


int main(){
	int price[]={2,3,5,1,4};
	int n = sizeof(price)/sizeof(int);
	int dp[10][10];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			dp[i][j] = -1;
		}
	}

	cout<<topDown(price,0,n-1,1,dp)<<endl;

	cout<<WineProblem(price,0,n-1,1)<<endl;
	cout<<bottomUp(price,n)<<endl;
	return 0;
}