#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int res = a + c;
		int res1 = b + d;
		if(res == 180 && res1 == 180){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}