#include <iostream>
using namespace std;
int xorSubarray(int arr[],int n){
	int res=0;
	for(int i=0;i<n;i++){
		int freq=(n-i)*(i+1);
		if(freq%2==1)
			res =res^arr[i];
	}
	cout<<res;
}



int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	xorSubarray(arr,n);
	return 0;
}