#include<iostream>
using namespace std;


void printSubset(int *arr,int i,int n,string osf){
	if(i == n)
	{
		cout<<"["<<osf<<"]"<<endl;
		return;
	}
	printSubset(arr,i+1,n,osf+to_string(arr[i])+",");
	printSubset(arr,i+1,n,osf);
}
int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printSubset(arr,0,n,"");
	return 0;
}