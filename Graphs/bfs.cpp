#include<bits/stdc++.h>
std::vector<std::vector<std::pair<int,int> > > graph;
//we want to have adcajency list of pair,as pair represents edge vertex,weight

void addEdge(int u,int v,bool bidir = true,int wt = 0){
	graph[u].push_back(std::make_pair(v,wt));
	if(bidir){
		graph[v].push_back(std::make_pair(u,wt));
	}
}

void display(){
	for(auto i:graph){
		//i->vector of pair
		if(i.size()==0){
			std::cout<<"empty";
		}
		for(auto j:i){
			//j is a pair
			std::cout<<"{"<<j.first<<","<<j.second<<"}";
		}
		std::cout<<'\n';
	}
}

void bfs(int src,int vertices){
	std::queue<int>qu;
	std::vector<bool> visited(vertices,false);
	qu.push(src);
	visited[src] = true;

	while(not qu.empty()){
		int currentNode = qu.front();
		qu.pop();
		std::cout<<currentNode<<" ";
		for(auto neighbor : graph[currentNode]){
			//neighbor is a pair
			if(not visited[neighbor.first]){
				qu.push(neighbor.first);
				visited[neighbor.first] = true;
			}

		}
	}
}
int main(){
	int vertices,edges;
	std::cin>>vertices>>edges;
	graph.resize(vertices);
	while(edges--){
		int u,v,wt;
		std::cin>>u>>v>>wt;
		addEdge(u,v,true,wt);
	}
	display();
	bfs(1,vertices);
	return 0;
}