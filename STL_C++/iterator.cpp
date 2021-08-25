#include<iostream>
#include<vector>
using namespace std;
int main(){
	// vector<int> v = {2,3,4,5,6};
	// vector<int> ::iterator it;
	// for(it= v.begin();it!=v.end();it++){ //this iterator is used in STL containers it acts like a pointer
	// 	cout<<(*it)<<endl;
	// }

	//vector of pair
	vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
	vector<pair<int,int>> :: iterator it;
	for(it= v_p.begin();it!=v_p.end();it++){ 
		cout<<(it->first)<<" "<<(it->second)<<endl;
	}


	//Range based loops     //index is not required,we can get the vale directly
	// for(int &val:v){      //the variable "val" is taking the vector v ele by copy n not by reference 
                              //therefore its better to add the c++ reference
	// 	cout<<val<<endl;
	// }


	//Range based loops for vector<pair>
	vector<pair<int,int>> v_p1 = {{1,2},{3,4}};
	for(pair<int,int> &value : v_p1){                 //in this line for(pair<int,int>) can be repalced by the auto keyword
		cout<<value.first<<" "<<value.second<<endl;   //it automatically knows the data type
	}




}