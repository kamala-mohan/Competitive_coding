#include<iostream>
#include<vector>
using namespace std;


//TC: O(n)
void solve(){
	int n;
	cin>>n;
	vector<string> v_s(n);
	for(int i=0;i<n;i++){
		cin>>v_s[i];
	}
	string ans = "";
	for(int i=0;i<n;i++){
		ans+=(v_s[i][i] == '0'?'1':'0');
	}
	cout<<ans<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}