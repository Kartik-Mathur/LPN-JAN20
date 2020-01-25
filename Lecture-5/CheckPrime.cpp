// CheckPrime
#include <iostream>
using namespace std;

bool CheckPrime(int n){
	int i = 2; 
	while(i<=n-1){ 
		if(n%i == 0){
			return false;
		}

		i = i +1;
	}
	return true;
}

void PrintAllPrimes(int n){

	for(int i=3;i<=n;i++){
		int ans = CheckPrime(i);
		if(ans == true){
			cout<<','<<i;
		}
	}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	if(n==2){
		cout<<'2'<<endl;
	}
	else{
		cout<<2;
		PrintAllPrimes(n);
	}

	// bool ans = CheckPrime(n);
	// if(ans == true){
	// 	cout<<"Prime"<<endl;
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;
	// }



	return 0;
}