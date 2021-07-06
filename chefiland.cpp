
// contest div 3

#include<iostream>
using namespace std;
int main(){
	int t=1;
	cin>>t;
	while(t--){
		int x,y,xr,yr,d;
		cin>>x>>y>>xr>>yr>>d;
		int X=xr*d;
		int Y=yr*d;
		if(x>=X && y>=Y){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
	return 0;
}