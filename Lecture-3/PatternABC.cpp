// 
#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int line;
	char ch;

	for(line = 1;line<=n;line++){
		ch = 'A';
		int i;
		//Increasing Characters
		for(i=1;i<=n-line+1;i++){
			cout<<ch;
			ch++;
		}

		ch = ch-1;
		// Decreasing Characters
		for(i=1;i<=n-line+1;i++){
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}










	// char ch='A';
	// while(ch<='Z'){
	// 	cout<<ch<<' ';
	// 	ch++;
	// }
	// cout<<endl;
	
	

	return 0;
}