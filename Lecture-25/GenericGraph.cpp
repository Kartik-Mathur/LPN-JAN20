#include <iostream>
#include <climits>
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

	int SSSP(T src, T des){
		unordered_map<T,int> dist;
		unordered_map<T,T> parent_map;
		// Set every node distance to infinity
		for(auto node:adjList){
			dist[node.first] = INT_MAX;
		}
		queue<T> q;
		dist[src] = 0;
		parent_map[src] = src;
		q.push(src);

		while(!q.empty()){
			T parent = q.front();
			q.pop();
			int parent_dist = dist[parent];

			for(auto children:adjList[parent]){
				if(dist[children] == INT_MAX){
					parent_map[children] = parent;
					dist[children] = 1 + parent_dist;
					q.push(children);
				}
			}
		}

		// for(auto x: dist){
		// 	cout<<"Distance of "<<x.first<<" from "<<src<<" : "<<x.second<<endl;
		// }
		T temp = des;

		while(temp!=src){
			cout<<temp<<"<--";
			temp = parent_map[temp];
		}	
		cout<<src<<endl;

		return dist[des];
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

	// g.addEdge(0,1);
	// g.addEdge(2,1);
	// g.addEdge(2,4);
	// g.addEdge(3,4);
	// g.addEdge(3,2);
	// g.addEdge(3,5);
	// g.addEdge(0,4);
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17]=-13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for(int u=0;u<=36;u++){
		for(int dice = 1;dice<=6;dice++){
			 int v = u+dice + board[u+dice];
			 g.addEdge(u,v,false);
		}
	}


	// g.BFS(0);
	cout<<"Min Moves : "<<g.SSSP(0,36)<<endl;

	return 0;
}