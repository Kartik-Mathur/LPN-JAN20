// Dijkstras.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <list>
using namespace std;

template<typename T>
class Graph{
public:
	map<T,list<pair<T,int> > > h;

	void addEdge(T u,T v,int dist,bool bidir=true){
		h[u].push_back(make_pair(v,dist));
		if(bidir){
			h[v].push_back(make_pair(u,dist));
		}
	}

	void Print(){
		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto neighbour:node.second){
				cout<<"("<<neighbour.first<<","<<neighbour.second<<") ";
			}
			cout<<endl;
		}
	}

	int Dijkstras(T src,T des){
		map<T,int> dist;
		for(auto node:h){
			dist[node.first] = INT_MAX;
		}
		dist[src] = 0;

		set<pair<int,T> >s;
		s.insert(make_pair(0,src));

		while(!s.empty()){
			auto temp = (*s.begin());
			int parentDist = temp.first;
			T parent = temp.second;

			s.erase(s.begin());

			for(auto children:h[parent]){
				if(dist[children.first]>parentDist + children.second){
					auto f = s.find(make_pair(dist[children.first],children.first));
					if(f!=s.end()){
						s.erase(f);
					}
					s.insert(make_pair(parentDist + children.second,children.first));
					dist[children.first] = parentDist + children.second;
				}
			}
		}

		for(auto it:dist){
			cout<<"Distance of "<<it.first<<" from "<<src<<" : "<<it.second<<endl;
		}
		return dist[des];
	}
};

int main(){

	Graph<string> g;
	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Jaipur","Mumbai",8);

	g.Print();
	g.Dijkstras("Amritsar","Delhi");

	return 0;
}
