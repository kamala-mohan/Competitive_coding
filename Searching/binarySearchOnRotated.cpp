#include<iostream>
using namespace std;

int binarySearchOnRotated(int *arr,int n,int target){
	int lo =0,hi=n-1;
	while(lo<=hi){
		int m =lo +(hi-lo)/2;
		if(arr[m] == target) return m;
		else if(arr[m] > arr[lo]){
			//case1
			if(target >= arr[lo] and target<=arr[m]){
				hi =  m-1;
			}
			else{
				lo = m+1;
			}
		}
		else{
			//case2
			if(target >= arr[m] and target <= arr[hi]){
				lo = m+1;
			}
			else{
				hi = m-1;
			}
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
	cout<<binarySearchOnRotated(arr,n,target);
	return 0;
}