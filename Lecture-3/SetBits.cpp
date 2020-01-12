// SetBits
#include <iostream>
using namespace std;

int main(){
	int n,number;
	cin>>n;

	int count = 0;

	for(number = n;number!=0;number=number>>1){
		if((number&1)==1){
			count++;
		}
	}
	
	cout<<"Set Bits"<<count<<endl;
	return 0;
}