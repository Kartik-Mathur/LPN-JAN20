// TertiaryOperator
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	n%2==0?cout<<"Even"<<endl:cout<<"Odd"<<endl;

	int a = n%2==0?0:1;
	cout<<a<<endl;
	
	return 0;
}