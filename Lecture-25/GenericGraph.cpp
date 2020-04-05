#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph{
public:
	unordered_map<T,list<T> > adjList;

	void addEdge(T u,T v,bool bidir =true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void Print(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<neighbours<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
	}
};

int main(){
	Graph<string> g;

	g.addEdge("Modi","Trump");
	g.addEdge("Modi","Yogi",false);
	g.addEdge("Yogi","Prabhu",false);
	g.addEdge("Prabhu","Modi",false);
	g.addEdge("Putin","Modi",false);
	g.addEdge("Putin","Trump",false);
	g.addEdge("Putin","Pope",false);

	g.Print();


	return 0;
}