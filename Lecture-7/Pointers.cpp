// Pointers
#include <iostream>
using namespace std;

int main(){
	int a[]={1,2,3,4,5};

	cout<<a<<endl;
	cout<<&a[0]<<endl;

	int x = 10;
	float b = 11.11;
	char ch = 'A';

	int *xp=0;
	float *bptr = &b;
	char *chptr = &ch;

	// cout<<x<<endl;
	// cout<<&x<<endl;
	// cout<<*(&x)<<endl;
	// cout<<*xp<<endl;
	cout<<*xp<<endl;

	// cout<<b<<endl;
	// cout<<&b<<endl;
	// cout<<bptr<<endl;
	// cout<<ch<<endl;
	// cout<<(float*)&ch<<endl;
	// cout<<(int*)chptr<<endl;

	return 0;
}