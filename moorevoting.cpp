#include<iostream>
using namespace std;
int maj_Ele(int arr[],int n){
	int major=arr[0],count=1;
	for(int i=1;i<n;i++){
		if(major!=arr[i]){
			count--;
			major=arr[i];
			count++;
		}else{
			count++;
		}

	}
	return major;
}



int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<maj_Ele(arr,n)<<endl;

	return 0;
}