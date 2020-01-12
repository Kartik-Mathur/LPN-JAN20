// Pattern101
#include <iostream>
using namespace std;

int main(){
	int n,i;
	cin>>n;

	int line;
	for(line = 1;line<=n;line++){
		int number;
		if(line%2==0){
			// even
			number = 0;
		}
		else{
			number = 1;
		}
		for(i=1;i<=line;i++){
			cout<<number<<' ';

			number=1-number;
		}
		cout<<endl;
	}
	
	

	return 0;
}