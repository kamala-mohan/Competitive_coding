#include<bits/stdc++.h>
using namespace std;
//formula to find nth gp term is (a*r^n-1)

long long power(int r,int n,int mod){
	if(n==0)
		return 1;

	long long temp = power(r,n/2,mod) % mod;

	if(n%2 == 0)
		return (temp*temp) % mod;
	else
		return (((temp*temp) % mod)*r) % mod;
}


int nthgpterm(int n,int a,int r){
	int mod = 1000000007;
	long long ans = (a*power(r,n-1,mod))%mod;
	cout<<ans;
	return (int) ans; 
}

int main(){
	long long int n,a,r;
	cin>>n>>a>>r;
	nthgpterm(n,a,r);
	return 0;
}
