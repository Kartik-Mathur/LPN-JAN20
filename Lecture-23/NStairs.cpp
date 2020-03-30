// NStairs
#include <iostream>
using namespace std;

int NStairs(int n,int k=3){
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += NStairs(n-i,k);
	}

	return ans;
}

int topDown(int n,int k,int *dp){
	if(n==0){
		dp[n] = 1;
		return 1;
	}
	if(n<0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}

	int ans = 0;
	for(int i=1;i<=k;i++){
		ans += topDown(n-i,k,dp);
	}

	dp[n] = ans;
	return ans;
}

int bottomUp(int n,int k){
	int *dp = new int[n+1];
	dp[0]= 1;

	for(int stairs = 1;stairs<=n;stairs++){
		int ans = 0;
		for(int i=1;i<=k;i++){
			if((stairs-i)>=0){
				ans += dp[stairs-i];
			}
		}
		dp[stairs] = ans;
	}
	return dp[n];
}

int main(){
	int n;

	cin>>n;
	int k =3;
	int *dp = new int[n+1];

	for(int i=0;i<=n;i++){
		dp[i] = -1;
	}
	cout<<topDown(n,k,dp)<<endl;
	cout<<bottomUp(n,k)<<endl;
	cout<<NStairs(n,k)<<endl;

	return 0;
}