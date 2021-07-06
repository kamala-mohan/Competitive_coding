#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l,h,count = 0;
		cin>>l>>h;
		string str;
		cin>>str;
		for(int i=1;i<str.length();i++){
			
			if(str[0] == '1'){
				i++;
			}
			else{
				count = count+1;
			}
			if(str[i] =='0'){
				count = count + 1;
			}
			if(str[i] == '1'){
				h = 2*(l-count);
			}
		}
		if(count == h){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
	return 0;
}