#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	// int line;

	// line = 1; // assignment
	int line = 1; // Initialization

	while(line<=n){
		// print n-line spaces
		int spaces = 1;
		while(spaces<=n-line){
			cout<<' ';
			spaces = spaces + 1;
		}

		// print inc. nos starting from line and line times
		int number = line;
		int i = 1;
		while(i<=line){
			cout<<number;

			number = number + 1;
			i = i +1 ;
		}

		// Print dec nos starting from 2*line - 2, line-1 times
		number = 2*line - 2;
		i = 1;
		while(i<=line-1){
			cout<<number;

			number = number -1;
			i=i+1;
		}

		line = line +1;
		cout<<endl;
	}


	return 0;
}