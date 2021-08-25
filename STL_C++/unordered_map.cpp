#include<iostream>
#include<unordered_map>
using namespace std;

void print(unordered_map<int,string> &m)
{
	// cout<<m.size(); //gives the size of the map
	for(auto &pr:m){
		cout<<(pr.first)<<" "<<(pr.second)<<endl;  
	}
	//prints in random order
}

int main(){
	//declaration
	unordered_map<int,string> m;
	m[1] = "abc";  
	m[5] = "cdc"; 
	m[3] = "acd";
	print(m);
}