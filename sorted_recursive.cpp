#include<bits/stdc++.h>
using namespace std;

int array_sorted(int *arr,int n){
	if(n==1||n==0)
		return 1;
	if(arr[n-1]<arr[n-2])
		return 0;

	return array_sorted(arr,n-1);
}
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
    if(array_sorted(arr,n)){
    	cout<<"sorted";
    }
    else{
    	cout<<"not sorted";
    }
	return 0;

}