// OOPS
#include<iostream> 
using namespace std;

/////////////////////// BLUEPRINT //////////////////////////////
class Car{
public:
	char name[20];
	int price;
	int model;

	void Print(){
		cout<<"Name  : "<<name<<endl;
		cout<<"Price : "<<price<<endl;
		cout<<"Model : "<<model<<endl<<endl;
	}
};
/////////////////////// BLUEPRINT //////////////////////////////


int main(){
	
	Car A;
	// A.name = "BMW"; // 
	strcpy(A.name,"BMW");
	A.price = 100;
	A.model = 2012;

	// cout<<A.name<<endl;
	// cout<<A.price<<endl;
	// cout<<A.model<<endl;

	Car B;
	strcpy(B.name,"Audi");
	B.price = 120;
	B.model = 2020;
	// cout<<B.name<<endl;
	// cout<<B.price<<endl;
	// cout<<B.model<<endl;
	A.Print();
	B.Print();
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';










	return 0; 
}
