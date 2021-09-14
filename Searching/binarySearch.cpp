#include<iostream>
using namespace std;

int binarySearch(int *arr,int n,int target){
	int lo = 0,hi =n-1;
	while(lo<=hi){
		int m = lo+(hi-lo)/2;
		if(arr[m] == target){
			return m;
		}
		else if(arr[m] >target){
			hi = m-1;
		}
		else {
			lo = m+1;
		}
	}
	return -1;
}


int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	cout<<binarySearch(arr,n,target);
	return 0;
}
