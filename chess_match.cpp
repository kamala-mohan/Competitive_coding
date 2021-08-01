#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,time,time1,diff;
	cin>>t;
	while(t--){
		int n,a,b;
		cin>>n>>a>>b;
		time = 2*(180+n);
		time1 = a + b;
	    diff = time  - time1;
	cout<<diff<<endl; 
	}
	
	return 0;
}