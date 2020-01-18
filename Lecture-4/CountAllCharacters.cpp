// CountAllCharacters
#include <iostream>
using namespace std;

int main(){
	int alpha = 0;
	int digit = 0;
	int special = 0;
	int white = 0;

	char ch;

	ch = cin.get();
	while(ch!='$'){
		if(ch == ' ' || ch == '\n' || ch == '\t'){
			white++;
		}
		else if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z')){
			alpha++;
		}
		else if(ch>='0'&&ch<='9'){
			digit++;
		}
		else{
			special++;
		}

		ch = cin.get();
	}
	cout<<"Whitespace : "<<white<<endl; 
	cout<<"Alphabets : "<<alpha<<endl; 
	cout<<"special : "<<special<<endl; 
	cout<<"Digit : "<<digit<<endl; 

	return 0;
}