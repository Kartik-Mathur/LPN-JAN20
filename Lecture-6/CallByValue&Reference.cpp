// CallByValue&Reference
#include <iostream>
using namespace std;

// Call by Value
void swap1(int &x,int &y){

	int temp = x;
	x=y;
	y=temp;

	return;
}

int main(){
	int a=10,b=20;

	cout<<"Before swapping a : "<<a<<" b : "<<b<<endl;
	swap1(a,b);
	cout<<"After swapping a : "<<a<<" b : "<<b<<endl;








	return 0;
}