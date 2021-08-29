#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int sa,sb,sc;
		cin>>sa>>sb>>sc;
		if(sa < sb and sa < sc){
			cout<<"Draw"<<endl;
		}
		else if(sb < sa and sb<sc){
			cout<<"Bob"<<endl;
		}
		else {
			cout<<"Alice"<<endl;
		}
	}
}
