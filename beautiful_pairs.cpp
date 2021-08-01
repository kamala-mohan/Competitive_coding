#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);         //fast input output
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll x;
		map<ll,ll> freq;
		for(ll i=0;i<n;i++){
			cin>>x;
			freq[x]++;
		}
		ll ans =0;
		for(auto it:freq){
			ans = ans + ((n-it.second)*it.second);

	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;  
}