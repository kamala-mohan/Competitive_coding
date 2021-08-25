#include<iostream>
using namespace std;
int main(){
	pair<int,string> p;
	p = make_pair(1,"abc");        //first way to declare it
	p = {2,"xtz"};
	cout<<p.first<<" "<<p.second;
	pair<int,int> p_array[];
	p_array[0] = {1,2};
	p_array[1] = {3,4};
	p_array[2] = {5,6};
	swap(p_array.first,p_array.second);
	for(int i=0;i<3;i++){
		cout<<p_array[i].first<<" "<<p_array[i].second;
	}
}
