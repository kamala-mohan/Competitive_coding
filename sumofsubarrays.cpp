#include<iostream>
using namespace std;

int sum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum += arr[i] * (n-i) * (i+1);
		
	}
	cout<<sum;
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sum(arr,n);


	return 0;
}