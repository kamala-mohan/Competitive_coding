#include<iostream>
using namespace std;

double avgRec(int *arr,int i,int n){
	if(i == n-1)
		return arr[i];

	if(i == 0)
		return ((arr[i] + avgRec(arr,i+1,n))/n);

	return (arr[i] + avgRec(arr,i+1,n));
}


int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<avgRec(arr,0,n);
	return 0;
}