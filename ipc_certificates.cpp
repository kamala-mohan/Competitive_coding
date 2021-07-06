#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	long long int n,m,k;
	cin>>n>>m>>k;
	
	
	for(int i=0;i<n;i++)
	{
		int input;int sum=0;
	    for(int j=0;j<=k;j++){
	        cin>>input;
	 	    sum+=input;
        }   
	    int q;
	    cin>>q;
		
	    if(q<=10 && sum>=m)
	    	
		    count++;
    }
    cout<<count;
    return 0;

}