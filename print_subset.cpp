#include<bits/stdc++.h>
using namespace std;

void print_subset(int *arr,int i,int n,string osf){
	if(i==n){
		cout<<"["<<osf<<"]\n";
		return;
	}
	print_subset(arr,i+1,n,osf + to_string(arr[i]));
	print_subset(arr,i+1,n,osf);
}
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	print_subset(arr,0,n,"");
	return 0;
}