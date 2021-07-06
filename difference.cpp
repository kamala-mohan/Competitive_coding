#include<iostream>
using namespace std;
int differencePair(int a[],int n,int D){
	int lo=0;
	int hi=n-1;
	while(lo<hi){
		if(a[hi]-a[lo]==D){
			cout<<"("<<a[lo]<<","<<a[hi]<<")";
			return 1;
		}else if(a[hi]-a[lo]>D){
			lo++;
		}else{
			hi--;
		}
	}
	cout<<"no pair";
}



int main(){
	int n;
	cin>>n;
	int D;
	cin>>D;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int result = differencePair(a,n,D);


	return 0;
}

