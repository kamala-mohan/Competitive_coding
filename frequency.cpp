#include<iostream>
using namespace std;

int fequerency(int arr[],int n,int d){
	int count = 0;
	for(int i=0;i<n;i++){
		if(arr[i] == d){
			count++;
		}
		
	}
	cout<<count<<endl;
	return 0;
	
}

int main(){

	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++) cin>>arr[i];
	int d;
	cin>>d;

	int res = fequerency(arr,n,d);
    

	return 0;
}