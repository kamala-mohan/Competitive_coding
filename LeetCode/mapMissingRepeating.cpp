#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
	int arr[]= {4,3,6,2,1,1};
	int n =6;
	unordered_map<int,bool> m;
	for(int i : arr){
		if(m.find(i) == m.end()){
			m[i] = true;
		}
		else{
			cout<<"repeatin ="<<i;
		}
	}
	for(int i=1;i<=n;i++){
		if(m.find(i) == m.end()){
			cout<<"missing ="<<i;
		}
	}
	

}