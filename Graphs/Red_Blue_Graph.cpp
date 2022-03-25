#include<bits/stdc++.h>
using namespace std;


vector<vector<pair<long,long>>> adj;

vector<int> bfs(int src,int c,int n){
	queue<int> qu;
	vector<int> dist(n+1,-1);
	qu.push(src);
	dist[src] = 0;
	while(not qu.empty()){
		int i = qu.front();
		qu.pop();
		for(pair<long,long> nb : adj[i]){
			if(dist[nb.first] != -1 or nb.second != c){
				continue;
			}
			qu.push(nb.first);
			dist[nb.first] = dist[i] + 1;
		}
	}
	return dist;
}

int main(){
	int n,m;
	cin>>n>>m;
	adj.resize(n+1);
	while(m--){
		int i,j,c;
		cin>>i>>j>>c;
		adj[i].push_back(make_pair(j,c));
		adj[j].push_back(make_pair(i,c));
	}
	int src,dest;
	cin>>src>>dest;
	vector<int> ds = bfs(src,0,n);
	vector<int> dd = bfs(dest,1,n);
	long long ans = INFINITY;
	for(int i =1;i<=n;i++){
		if(i==src or i== dest or ds[i] == -1 or dd[i] == -1 or dd[dest] == -1){
			continue;
		}
		ans = min(ans,ds[i]+dd[i]);
	}
	if(ans == INFINITY) ans = -1;
	cout<<ans<<'\n';
	return 0;
}