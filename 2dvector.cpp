#include<iostream>
#include <vector>
#include<bits/stdc++.h>

#define vi      vector<int>
using namespace std;
int main()
{
// #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

	// method 1
	int n,m; cin>>n;
    vector<vector<int> >v(n);   //n rows and every row is empty
    for(int i=0;i<n;i++){
    	for(int j=0;j<v.size();j++){
    		int x; cin>>x;
    		v[i].push_back(x);
           
    	}
    }


    
    




 //    //method 2

 //    vector<vector<int>> v;  //v andhar 0 rows
 //    for(int i=0;i<n;i++){
 //    	vector<int> tmp;
 //    	for(int j=0;j<m;j++){
 //    		int x; cin>>x;
 //    		tmp.push_back(x);
 //    	}
 //    	v.push_back(tmp);
 //    }



 //    //method 3
 //    vector<vector<int>> v(n,vector<int>(m));  //v->size,v[i]->[0,0,0,0....0] (sizw ->m)
    

    // int n,m;cin>>n>>m;
    // vector<vi> a(n, vi(m)); //n is the number of rows the 2nd arg is the default vals
    // for(int i=0;i<n;i++){
    // 	for(int j=0;j<a[i].size();j++)
    // 		cout<<a[i][j]<<" ";
    // 	cout<<'\n';
    // }

	return 0;
}