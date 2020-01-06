// Pattern_123
#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;// n number of lines print krni hai
	int number = 1;
	int line = 1;
	while(line<=n){
		// Work
		int i = 1;
		while(i<=line){
			// work
			cout<<number<<' ';
			number = number+1;

			i=i+1;
		}
		line = line + 1;
		// cout<<'\n';
		cout<<endl;
	}


	return 0;
}