// PrintPrimesTillN
// CheckPrime
#include <iostream>
using namespace std;


int main(){
	int n;
	cin>>n;

	int number = 2;
	while(number<=n){
		// check every number if its prime or not
		// Prime hua toh print krdo otherwise leave it
		// 2 se lekar number-1 tak number kisi se divide nahi hona chahiye
			int i = 2; // initialization
			while(i<=number-1){ // condn
				if(number%i == 0){
					break;
				}
				i = i +1// updation
			}

			if(i==number){
				cout<<number<<endl;
			}
		number = number + 1;
	}



	return 0; // exit
}