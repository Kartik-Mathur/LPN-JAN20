// DoWhile
#include <iostream>
using namespace std;

int main(){
	int i=1;
	ch = cin.get();
	while(ch!='$'){


		ch = cin.get();
	}

	do{
		ch = cin.get();
		if(ch == '$'){
			break;
		}
	}while(ch!='$');

	do{
		cout<<i<<endl;
		i++; // Updation
 
	}while(i>=10); // Condition check

	// int i = 1;
	// while(i<=10){
	// 	cout<<i<<endl;

	// 	i++;
	// }



	return 0;
}