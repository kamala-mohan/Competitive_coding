#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector<int> a;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		for(int i=0;i<k;i++){
			if(a[i]>0)
				break;
			a[i]*=-1;
		}
		long long int ans =0;
		for(int i=0;i<n;i++){
			if(a[i]>0)
				ans+=a[i];
		}
		cout<<ans<<endl;
	}
	return 0;
	
}