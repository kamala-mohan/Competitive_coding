#include<iostream>
using namespace std;

int peakElement(int *arr,int n){
	int lo=0,hi= n-1;
	
	while(lo<hi){
		int m=lo +(hi-lo)/2;
		if(arr[m]>arr[m+1]){
			hi = m;
		}else{
			lo = m+1;
		}

	}
	return arr[low]
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<peakElement(arr,n)<<endl;
}