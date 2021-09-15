#include<iostream>
using namespace std;


int findMin(int *arr,int n){
	//setting search space
	int lo=0,hi = n-1;
	while(lo<hi){
		int m = lo +(hi-lo)/2;
		if(arr[m] <arr[hi]){
			hi = m;
		}
		else{
			lo = m+1;
		}
	}
	return arr[hi];
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<findMin(arr,n)<<endl;
}