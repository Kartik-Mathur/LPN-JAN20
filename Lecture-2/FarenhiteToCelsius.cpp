// FarenhiteToCelsius
#include <iostream>
using namespace std;

int main(){
	int initial_val,f_val,step;

	cin>>initial_val>>f_val>>step;

	int f = initial_val;
	while(f<=f_val){
		int c = (5/9.0)*(f-32);

		cout<<f<<' '<<c<<endl;

		f = f + step;
	}


	return 0;
}