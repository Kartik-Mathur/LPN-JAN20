// Continue
#include <iostream>
using namespace std;

int main(){
	int i=1;

	while(i<=10){
		if(i==5){
			i++;
			continue;
		}
		cout<<i<<endl;
		i++;
	}
	// cout<<" /N : "<<i<<endl;
	

	return 0;
}