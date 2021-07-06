#include<iostream>
using namespace std;
int array(int arr[],int a[], int n){
	for(int i=0;i<n;i++){
		a[0] = 1,a[1] = 1;
		if(arr[abs(arr[i])-1]<0 ){
			arr[abs(arr[i])-1] *= -1;

		}
		if(arr[abs(arr[i])-1]>n){
			a[abs(a[i])-1]*=-1;
		}
		return i>0;
	}
}



int main(){
	int n;
	cin>>n;
	int arr[n];
	int a[2];
	for(int i=0;i<n;i++) cin>>arr[i];
	int result = array(arr,a,n);
	return 0;
}