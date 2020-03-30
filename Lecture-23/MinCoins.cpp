// MinCoins
#include <iostream>
using namespace std;

int MinCoins(int *coins,int n,int amount,int *dp){
	if(amount == 0){
		dp[amount] = 0;
		return 0;
	}
	if(dp[amount]!=-1){
		return dp[amount];
	}

	int ans = INT_MAX;
	for(int i=0;i<n;i++){
		if(amount>=coins[i]){
			int ChotiAmountTakKeCoins = MinCoins(coins,n,amount-coins[i],dp);
			ans = min(ans,ChotiAmountTakKeCoins+1); 
		}
	}
	dp[amount] = ans;
	return ans;
}

int bottomUp(int *coins,int n,int amount){
	int *dp = new int[amount+1];
	//Initialization of base case
	dp[0] = 0;

	for(int paise = 1; paise<=amount; paise++){
		// Har paise ke liye coins ke array par iteration krni padegi 
		int ans = INT_MAX;
		for(int i=0;i<n;i++){
			if(paise>=coins[i]){
				ans = min(ans,dp[paise-coins[i]]+1);
			}
		}
		dp[paise] = ans;
	}
	for(int i=0;i<=amount;i++){
		cout<<dp[i]<<' ';
	}
	cout<<endl;
	return dp[amount];
}

int main(){

	int coins[]={1,2,5};
	int n = sizeof(coins)/sizeof(int);

	int amount;
	cin>>amount;

	int *dp = new int[amount+1];

	for(int i=0;i<=amount;i++){
		dp[i] = -1;
	}

	cout<<MinCoins(coins,n,amount,dp)<<endl;
	cout<<bottomUp(coins,n,amount)<<endl;

	return 0;
}