//this question tells sieve technique is not onlyb used in prime nos

#include<iostream>
#include<map>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


unordered_map<ll,ll> m;
bitset<1000005> cubes;

void gen_Cubes(int n){
	cubes.set();    //making all the numbers as true
	for(int div = 2;div*div*div<=n;div++){
		if(cubes[div]){
			for(int mul=1;div*div*div*mul<=n;mul++){
				cubes[div*div*div*mul] = false;
			}
		}
	}
	int pos = 1;
	m[1] = pos;
	for(int i=2;i<1000005;i++){
		if(cubes[i]){
			m[i] = ++pos;
 
		}
	}

}

int main(){
	int t;
	cin>>t;
	gen_Cubes(1000000);
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		if(m.count(n)){                        //count fxn returns 1 if ele is present else returns 0
			cout<<"case"<<i<<":"<<m[n]<<endl;
		}
		else{
			cout<<"not a cube free";
		}
	}
	return 0;

}