// CountCharacters
#include <iostream>
using namespace std;

int main(){
	char ch;
	int count = 0;

	// cin>>ch; // Initialization
	ch = cin.get();
	while(ch!='$'){

		count++;

		// cin>>ch; // Updation 
		ch = cin.get();
	}
	cout<<count<<endl;

	return 0;
}