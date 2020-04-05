#include <iostream>
#include <vector>
#include <unordered_map>
#include <list>
#include<queue>
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

	void BFS(T src){
		unordered_map<T,bool> visited;
		queue<T> q;

		visited[src] = true;
		q.push(src);

		while(!q.empty()){
			T parent = q.front();
			cout<<parent<<' ';
			q.pop();

			for(auto children:adjList[parent]){
				if(!visited[children]){
					q.push(children);
					visited[children] = true;
				}
			}
		}
		cout<<endl;
	}
};

int main(){
	// Graph<string> g;
	Graph<int> g;

	// g.addEdge("Modi","Trump");
	// g.addEdge("Modi","Yogi",false);
	// g.addEdge("Yogi","Prabhu",false);
	// g.addEdge("Prabhu","Modi",false);
	// g.addEdge("Putin","Modi",false);
	// g.addEdge("Putin","Trump",false);
	// g.addEdge("Putin","Pope",false);

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,2);
	g.addEdge(3,5);
	g.addEdge(0,4);


	g.BFS(0);


	return 0;
}