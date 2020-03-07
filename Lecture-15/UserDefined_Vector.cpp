// UserDefined_Vector
#include<iostream> 
using namespace std;

class Vector{
public:
	int *a;
	int ms;
	int cs;

	Vector(int s=2){
		cs = 0;
		ms = s;
		a= new int[ms];
	}

	void push_back(int data){
		if(cs == ms){
			int *olda = a;
			int oldms = ms;

			ms = 2*ms;
			a = new int[ms];
			for(int i=0;i<oldms;i++){
				a[i] = olda[i];
			}
			delete []olda;
		}
		a[cs] = data;
		cs++;
	}

	void pop_back(){
		if(cs>0){
			cs--;
		}
	}

	int size(){
		return cs;
	}

	int capacity(){
		return ms;
	}
	//  cout<<v[i]<<endl;
	int operator[](int i){
		return a[i];
	}

	void operator+(int i){
		for(int i=0;i<cs;i++){
			a[i]++;
		}
	}

	void operator-(int i){
		for(int j=0;j<cs;j++){
			a[j] = a[j] - i;
		}		
	}

	bool empty(){
		return cs == 0;
	}

};

int main(){

	Vector v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	
	
	cout<<"Size : "<<v.size()<<endl;
	
	cout<<"Capacity "<<v.capacity()<<endl;
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	cout<<endl;
	
	v-3;

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	cout<<endl;

	while(!v.empty()){
		v.pop_back();
	}
	cout<<v.size()<<endl;






	return 0; 
}
