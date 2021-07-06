#include<iostream>
using namespace std;

int minElement(int arr[],int n){
	int small = arr[0];
	for (int i=1;i<n;i++){
		if(small >arr[i]){
			small = arr[i];
		}
		
	}
	return small;
}
	

	


int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<minElement(arr,n);


	return 0;
}