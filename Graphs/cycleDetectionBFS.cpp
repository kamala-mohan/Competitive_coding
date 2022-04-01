#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	bool checkForCycle(int s,int v,vector<int>adj[],vector<int> &visited){
		//src nodes parent is -1
		vector<int> parent(v,-1);

		//create a queue for BFS
		//pair to store the node, and its parent node
		queue<pair<int,int>> q;

		visited[s] = true;
		q.push({s,-1});

		while(!q.empty()){

			int node = q.front().first;
			int par = q.front().second;
			q.pop();

			for(auto it:adj[node]){
				if(!visited[it]){
					visited[it] = true;
					q.push({it,node});
				}
				else if(par != it)
					return true;
			}
		}
		return false;
	}

public:
	bool isCycle(int v,vector<int> adj[]){
		//visited array initially with all false values
		vector<int> vis(v,0);
		for(int i =0;i<v;i++){
			if(!vis[i]){
				if(checkForCycle(i,v,adj,vis)) return true;
			}
		}
		return false;
	}
};

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int v,e;
		cin>>v>>e;
		//array os vector
		vector<int> adj[v];
		for(int i =0;i<e;i++){
			int u,v; cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isCycle(v,adj);
		if(ans)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
	return 0;
}