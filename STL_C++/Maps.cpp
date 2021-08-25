#include<iostream>
#include<map>
using namespace std;


//  //passing maps to fxns
void print(map<int,string>&m){
	// cout<<m.size(); //gives the size of the map
	for(auto &pr:m){
		cout<<(pr.first)<<" "<<(pr.second)<<endl;  
	}

}
int main(){
	map<int,string> m;          
	 //first way of assigning values
	//key  //value
	m[1] = "abc";  //O(logn)
	m[5] = "cdc";
	m[3] = "acd";
	

	// //second wat of putting val
	// m.insert({4,"gfg"});
	// map<int,string> ::iterator it;
	// for(it = m.begin();it!=m.end();it++){ //accessing n ele O(nlogn)
	// 	cout<<(it->first)<<" "<<(it->second)<<endl;      //maps are stored as pairs in the memory
	// }


	// //second way using auto keyword
	// for(auto &pr:m){
	// 	cout<<(pr.first)<<" "<<(pr.second);  //dont have to use (*) cuz auto handles it
	// }

	//find fxn in map  
	//this also finds in O(log(n))
	//find fxn reaturns an iterator therefore
	// auto pt = m.find(1);
	// if(pt == m.end()){
	// 	cout<<"no val";
	// }else{
	// 	cout<<(pt->first)<<" "<<(pt->second);
	// }


	//erase fxn n map  -> TC O(log(n))
	m.erase(3); //3 is the key, we can also give the iterator to erase
	m.clear(); //it empties the map
	print(m);



}