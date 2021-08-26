#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		set<string> st;
		for(i=0;i<n;i++){  //O(n)
			string s;
			cin>>s;
			st.insert(s);     //O(log(n))
		}
		for(i = 0;i<=n;i++){   //O(n)
			int num = i;
			string bin = "";
          
			while(num){
                
				bin += to_string(num % 2);
				num/=2;

			}
			reverse(bin.begin(),bin.end());    //O(n)
           
			int cur = bin.size();
			string res = string(n-cur,'0');
			res += bin; 
		

			if(st.find(res) == st.end()){
				cout<<res<<"\n";
				break;
			} 
		}
	}
}