// UniqueNumber1/
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int i,number;
	int ans = 0;

	for(i=0;i<n;i++){
		cin>>number;
		ans = ans ^ number;
	}
	cout<<ans<<endl;
	

	return 0;
}