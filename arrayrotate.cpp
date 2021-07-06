#include<iostream>
using namespace std;

void rotate(int arr[],int n){
	int lo=0,hi=n-1;
	while(lo<hi){
		swap(arr[hi],arr[lo]);
		lo++;
		// cout<<arr;
	
	}
    
	
}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	rotate(arr,n);
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" " ;
    }
	return 0;
}