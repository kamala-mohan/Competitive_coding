#include<iostream>
using namespace std;
int maxSubArray(int arr[],int n){
	int current = 0;
	int max = 0;
	for(int i=0;i<n;i++){
		current = current +arr[i];
		if(current>max){
			max=current;
		}
		if(current<0){
			current =0;
		}
	}
	return max;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<maxSubArray(arr,n);
	/* code */
	return 0;
}