//if we wanna store a key value pair,then use a map
//stores unique keys only in sorted fashion of keys
#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,string> mpp;
	mpp[13] = "kamala";
	mpp[12] = "prabhu";
	mpp[13] = "zow";
	for(auto it:mpp){
		cout<<it.first<<" "<<it.second;
	}



    //keys r randomly stored
	unordered_map<int,int> mpp;


	//multimap
	multimap<int,int> mpp;
	mpp.insert(13,"kam");
	mpp.insert(13,"raj");


	
}