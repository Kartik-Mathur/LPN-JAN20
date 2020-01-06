#include <iostream>
using namespace std;

int main(){

	cout<<"Hello World!";

	int a,b,c;
	// cin>>a>>b>>c;
	cin>>a;
	if(a%2==0){
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd"<<endl;
	}

	int i = 1;
	while(i<=10){
		cout<<i<<endl;

		i= i+1;
	}
	// cin>>b;
	// cin>>c;

	// cout<<a;
	// cout<<b;
	// cout<<c;
	// cout<<a<<'\n'<<b<<c<<'\n';
	// cout<<'\n';



	return 0;
}