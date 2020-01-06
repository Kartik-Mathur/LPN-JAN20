// Break
// CheckPrime
#include <iostream>
using namespace std;


int main(){

	int k = 1;
	while(k<=5){
		if(k == 4){
			break;
		}

		cout<<k<<endl;
		k=k+1;
	}

	return 0; 
}