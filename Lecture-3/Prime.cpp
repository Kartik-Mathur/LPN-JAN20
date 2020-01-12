// Prime
#include <iostream>
using namespace std;

int main(){
	int n,i,number;
	cin>>n;

	for(number=2;number<=n;number++){
		for(i=2;i<=number-1;i++){
			if(number%i==0){
				break;
			}
		}
		if(i==number){
			cout<<number<<' ';
		}
	}
	
	cout<<endl;

	return 0;
}