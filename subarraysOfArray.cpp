#include<iostream>
using namespace std;

int subArrays(int arr[],int n){
	int sum =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=i;k<=j;k++){
				cout<<arr[k];
				sum+=arr[k];
				            }
            cout<<endl;
		}
	}
	cout<<sum;
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	subArrays(arr,n);
	return 0;
}