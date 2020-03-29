// InbuiltHashmap
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){

	// unordered_map<string,int> h; // I: Constant, R:Constant
	map<string,int> h; // I:logN, R:logN

	// Insertion ways
	h.insert(make_pair("Mango",100));	
	
	pair<string,int> p("Kiwi",80);
	h.insert(p);	

	p.first = "Guava";
	p.second = 70;
	h.insert(p);	

	h.insert(make_pair("Orange",120));	
	h.insert(make_pair("Apple",140));	

	h["Pineapple"] = 250; // Insertion
	h.erase("Pineapple");
	// Print - For each loop
	for(auto node:h){
		cout<<node.first<<"->"<<node.second<<endl;
	}
	// Print the entire hashmap

	// for(int i =0;i<h.bucket_count();i++){
	// 	// Iterator over every buckets linked list
	// 	cout<<i<<"->";
	// 	for(auto it = h.begin(i);it!=h.end(i);it++){
	// 		cout<<"("<<it->first<<","<<it->second<<") ";
	// 	}
	// 	cout<<endl;
	// }




	return 0;
}