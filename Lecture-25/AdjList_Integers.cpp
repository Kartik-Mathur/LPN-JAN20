// AdjList_Integers
#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph{
public:
	list<int> *adjList;
	int N;
	Graph(int n){
		adjList = new list<int>[n];
		N = n;
	}

	void addEdge(int u,int v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void Print(){
		for(int i=0;i<N;i++){
			cout<<i<<"-->";
			for(auto node:adjList[i]){
				cout<<node<<' ';
			}
			cout<<endl;
		}
		cout<<endl;
	}	

};

int main(){
	Graph g(5);

	g.addEdge(1,2);
	g.addEdge(4,2);
	g.addEdge(1,3);
	g.addEdge(4,3);
	g.addEdge(1,4);

	g.Print();

	return 0;
}