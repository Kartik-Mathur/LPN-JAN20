// ReverseANumber
#include <iostream>
using namespace std;

int main(){
	int n,number;
	cin>>n;

	for(number = n;number!=0;number = number/10){
		cout<<number%10;
	}
	
	cout<<endl;

	return 0;
}