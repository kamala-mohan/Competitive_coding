#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=0,sum=0;
	int mx = INT_MIN;
	while(j<n){
		sum = sum + arr[j]; 
		if(j-i+1<k){
			j++;
		}
		else if(j-i+1 == k){
			mx = max(mx,sum);
			sum = sum - arr[i];
			j++;
			i++;
		}

	}
	cout<<mx<<endl;
}
