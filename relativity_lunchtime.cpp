#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t,h;
	cin>>t;

	while(t--){
		int g,c;
		cin>>g>>c;
		h = (c*c/(2*g));
	cout<<h<<endl;
	}
	
	return 0;
}