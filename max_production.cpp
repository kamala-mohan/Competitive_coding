#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long int t;
	cin>>t;
	while(t--){
		int d,x,y,z;
		cin>>d>>x>>y>>z;
		int day = x*7;
		int day1 = 7 - d;
		int r = y*d;
		int r1 = z*day1;
	    int res = r+r1;
	cout<<max(day,res)<<endl;
	}
	return 0;
}