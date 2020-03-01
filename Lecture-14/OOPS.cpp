// OOPS
#include<iostream> 
#include <cstring>
using namespace std;

/////////////////////// BLUEPRINT //////////////////////////////
class Car{
private:
	int price;
public:
	char *name;
	int model;

	// 1. Default Constructor
	Car(){
		name = NULL;
		cout<<"In Default Constructor"<<endl;
	}

	// 2. Parameterized Constructor
	Car(char*n,int p,int m){
		cout<<"In Parameterized Constructor"<<endl;
		name = new char[strlen(n)+1];
		strcpy(name,n);
		price = p;
		model = m;
	}

	// 3. Copy Constructor
	Car(Car &X){
		cout<<"In Copy Constructor"<<endl;
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
	}
	// Copy Assignment Operator 
	// Car E; 
	// E = D;
	void operator=(Car X){
		cout<<"In Copy Assignment Operator"<<endl;
		if(name!=NULL){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(X.name)+1];
		strcpy(name,X.name);
		price = X.price;
		model = X.model;
	}


	void SetPrice(int p){
		if(p>100){
			price = p;
		}
		else{
			price = 101;
		}
	}

	int GetPrice(){
		return price;
	}

	void SetName(char *n){
		if(name!=NULL){
			delete []name;
			name = NULL;
		}
		name = new char[strlen(n)+1];
		strcpy(name,n);	
	}

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
	// strcpy(A.name,"BMW");
	A.SetName("BMW");
	// A.price = 100;
	A.SetPrice(-100);
	A.model = 2012;
	cout<<A.GetPrice()<<endl;
	// cout<<A.name<<endl;
	// cout<<A.price<<endl;
	// cout<<A.model<<endl;

	Car B;
	// strcpy(B.name,"Audi");
	B.SetName("AUDI");
	// B.price = 120;
	B.SetPrice(120);
	// cout<<B.price<<endl;
	B.model = 2020;

	Car C("Maruti",100,2019);
	
	// Calling Copy Constructor
	Car D = C; // or Car D(C);
	D.name[0] = 'Z';
	// Car E;
	// E = D; // Copy Assignment Operator
	// cout<<B.name<<endl;
	// cout<<B.price<<endl;
	// cout<<B.model<<endl;
	A.Print();
	B.Print();
	C.Print();
	D.Print();
	// E.Print();
	
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';










	return 0; 
}
