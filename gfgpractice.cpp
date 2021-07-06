#include<iostream>
using namespace std;
void twoPointer(int arr[],int n){
	
	int lo = 0, mid =0, hi = n-1;
	while(mid<=hi){
		if(arr[mid]==0){
			swap(arr[mid],arr[lo]);
			lo++;
			mid++;
		}else if(arr[mid] == 1){
			mid++;
		}else{
			swap(arr[mid],arr[hi]);
			hi--;
		}
	}
	
	
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	twoPointer(arr,n);
    for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	

	return 0;
}