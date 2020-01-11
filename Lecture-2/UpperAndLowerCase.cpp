// 
#include <iostream>
using namespace std;

int main(){
	char ch;
	cin>>ch;

	int number = ch;
	if(number>=65 && number<=90){
		cout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Lower Case"<<endl;
	}

	// 2nd way
	if(ch>=65 && ch<=90){
		cout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Lower Case"<<endl;
	}

	// 3rd way 
	if(ch>='A' && ch<='Z'){
		xcout<<"Upper Case"<<endl;
	}
	else{
		cout<<"Lower Case"<<endl;
	}

	return 0;
}
