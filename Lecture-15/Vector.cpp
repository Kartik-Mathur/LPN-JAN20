#include<iostream> 
#include<vector>
using namespace std;


int main(){

	vector<int> v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);

	v.pop_back();
	cout<<"Size : "<<v.size()<<endl;
	cout<<v.max_size()<<endl;
	cout<<"Capacity "<<v.capacity()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	cout<<endl;
	
	for(int i=0;i<v.size();i++){
		v[i] = i*10;
	}
	

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<' ';
	}
	cout<<endl;	
	return 0; 
}
