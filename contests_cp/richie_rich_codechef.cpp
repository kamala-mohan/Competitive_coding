#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t,res,diff;
	cin>>t;

	while(t--){
		int a,b,x;
		cin>>a>>b>>x;
		diff = b - a;
		res = diff/x;
	cout<<res<<endl;
	}
	
	return 0;

}