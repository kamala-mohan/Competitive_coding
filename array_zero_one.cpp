#include<iostream>
using namespace std;

void separate(int arr[],int n){
	int lo =0;
	int hi = n-1;
	while(lo<hi){
		if(arr[lo] == 1){
			swap(arr[lo],arr[hi]);
			hi--;
		}
		else{
			lo++;
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	separate(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}