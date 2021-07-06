#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	
	while(T--){
		int px,py,qx,qy;
	    cin>>px>>py>>qx>>qy;
		int xr=2*qx-px;
		int yr=2*qy-py;
		cout<<xr<<" "<<yr<<endl;
	}

	return 0;
}