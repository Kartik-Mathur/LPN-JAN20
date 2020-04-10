#include <iostream>
#include <climits>
#include <vector>
#include <unordered_map>
#include <list>
#include<queue>
using namespace std;

template<typename T>
class Graph{
	void DFSHelper(T node,unordered_map<int,bool> &visited){
		visited[node] = true;
		cout<<node<<' ';
		for(auto child:adjList[node]){
			if(!visited[child]){
				DFSHelper(child,visited);
			}
		}
	}
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

	void DFS(T node){
		unordered_map<int,bool> visited;
		DFSHelper(node,visited);
		int component = 1;
		for(auto node:adjList){
			if(!visited[node.first]){
				DFSHelper(node.first,visited);
				component++;
			}
		}
		cout<<endl;
		cout<<"Number of components : "<<component<<endl;
	}
};

int main(){
	
	Graph<int> g;

	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(3,4);
	g.addEdge(3,2);
	g.addEdge(3,5);
	g.addEdge(0,4);
	g.addEdge(10,14);
	g.addEdge(10,11);
	g.addEdge(14,12);
	g.addEdge(140,120);
	g.addEdge(141,120);


	g.DFS(0);
	cout<<endl;

	return 0;
}