#include <bits/stdc++.h>
using namespace std;

bool comp(int el1,int el2){
	if(el1>=el2) return true;
	return false;
}

bool comp(pair<int,int> e1,pair<int,int> e2){
	if(e1.first < e2.second) return true;
	if(e1.first == e2.first && e1.second > e2.second) return true;
	return false;
}
int main(){
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(5);
    vec.push_back(3);
    sort(vec.begin(),vec.end());      // if comparator is not given then it sorts in AO
    for(auto i:vec){
    	cout<<i;
    }
    sort(vec.begin(),vec.end(),greater<int>());  // sorts in DO 
    for(auto i:vec){
    	cout<<i;
    }

    //to write our own comparator
    sort(vec.begin(),vec.end(),comp);

    vector<pair<int,int>> vec;
    vec.push_back({1,5});
    vec.push_back({3,4});
    vec.push_back({2,7});
    vec.push_back({3,9});
    vec.push_back({2,5});

    //i want to sort them in first order ascending,and if first 
    //equal then sort them in second order descending
    //(1,5) ,(2,7) (2,5)(3,9) (3,4)
}
