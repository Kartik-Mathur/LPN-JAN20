// PointersAndFunctions
#include <iostream>
using namespace std;

void Update(int *x){
	*x = *x + 1;
}

int main(){
	
	int a = 10;

	cout<<a<<endl;
	Update(&a);                  
	cout<<a<<endl;

	return 0;
}