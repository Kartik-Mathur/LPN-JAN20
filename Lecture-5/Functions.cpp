// Functions
#include <iostream>
using namespace std;

// void PrintHello(); // Forward Declaration
void PrintHello(){

	cout<<"Hello World!"<<endl;

	return;
}

// void Multiply(int a,int b){
// 	cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;

// 	return;
// }

int Multiply(int a,int b){
	cout<<a<<" and "<<b<<endl;
	int ans = a*b;

	return ans;
}

void Print(){
	for(int i=1;i<=20;i++){
		cout<<i<<" ";
	}
	cout<<endl;	
}

void PrintTable(int initial_val,int f_val,int step){

	int f = initial_val;
	while(f<=f_val){
		int c = (5/9.0)*(f-32);

		cout<<f<<' '<<c<<endl;

		f = f + step;
	}

}

int main(){

	PrintHello(); // Calling 
	
	int ans = Multiply(10,12);
	cout<<ans<<endl;

	Print();
	PrintTable(0,300,20);
	PrintTable(0,60,20);

	

	return 0;
}

