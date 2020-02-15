// IntToString
#include<iostream>
using namespace std;

char a[][10]={
	"zero","one","two","three","four","five","six","seven","eight","nine"
};

void IntToString(int n){
	// base case
	if(n==0){
		return;
	}
	// recursive case
	IntToString(n/10);
	cout<<a[n%10]<<' ';

}

int main(){

	int n;
	cin>>n;

	IntToString(n);
	cout<<endl;



	return 0;
}