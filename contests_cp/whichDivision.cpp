#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int R;
		cin>>R;
		if(R >= 2000){
			cout<<"1"<<endl;
		}
		else if(R >= 1600 and R <2000){
			cout<<"2"<<endl;

		}
		else{
			cout<<"3"<<endl;
		}
	}

	return 0;
}