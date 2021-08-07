#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g1,s1,b1,g2,s2,b2;
		cin>>g1>>s1>>b1>>g2>>s2>>b2;
		int a1 = g1+s1+b1;
		int a2 = g2+s2+b2;
		if(a1>a2){
			cout<<"1"<<endl;
		}
		else{
			cout<<"2"<<endl;
		}
	}
	return 0;
}