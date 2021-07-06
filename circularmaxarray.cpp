// #include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int maxSubArray(int a[],int n){
	int maxsum=INT_MIN;
	int minsum=INT_MAX;
	int array_sum=0,current=0,res=0;
	for(int i=0;i<n;i++){
		current+=a[i];
		
		array_sum+=a[i];
		// cout<<array_sum<<" ";
		if(current>maxsum){
			maxsum=current;
		}
		// cout<<maxsum<<endl;
		if(current<0)
			current=0;
	}
	current=0;
	
	for(int i=0;i<n;i++){
		// current=0;
		// cout<<current<<" ";
		current+=a[i];
		
		// array_sum+=a[i];
		// cout<<array_sum<<" ";
		if(current<minsum){
			minsum=current;
		}
		// cout<<minsum<<" ";
		if(current>0)
			current=0;
	}

	if(array_sum==minsum)
	    cout<<maxsum<<endl;
	else
		res=(array_sum-minsum);
	    cout<<res;
}
   


int main(){
// #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	maxSubArray(a,n);
    return 0;
}