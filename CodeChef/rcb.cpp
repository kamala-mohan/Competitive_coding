#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,z;
		cin>>x>>y>>z;
		int r1 = (z*2) + x;
		int r2 = (z*1) + x;
		if(r1 >= y or r2>=y){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}