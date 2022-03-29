#include<bits/stdc++.h>
using namespace std;

vector<vector<long long>> graph;   //this is an unweighted graph,so we do not use pair in this

void addEdge(int u,int v){
	graph[u].push_back(v);
	graph[v].push_back(u);
}
void dfsHelper(int src,vector<bool> &visited){
	visited[src] = true;
	cout<<src<<" ";
	for(int neighbor : graph[src]){
		if(not visited[neighbor]){
			dfsHelper(neighbor,visited);
		}
	}
}
void dfs(int src,int v){
	vector<bool>visited(v,false);
	//for disconnecetd graphs as well
	for(int i = 1;i<v;i++){
		if(not visited[i]){
			dfsHelper(i,visited);
		}
	}
	
}

int main(){
	int v,e;
	cin>>v>>e;
	graph.resize(v+1);
	while(e--){
		int u,v;
		cin>>u>>v;
		addEdge(u,v);
	}
	dfs(1,v+1);
	return 0;
}