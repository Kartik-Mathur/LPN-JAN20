// ThisPointer
#include <iostream>
#include <vector>
using namespace std;

class abc{
public:
	int a,b,c;
	abc(int a,int b,int c){
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void Print(){
		cout<<"a : "<<a<<endl;
		cout<<"b : "<<b<<endl;
		cout<<"c : "<<c<<endl;
	}
};

int main(){

	abc a(10,20,30);
	a.Print();

	return 0;
}