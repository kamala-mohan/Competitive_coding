#include<iostream>
using namespace std;

int subarray(int a[],int n,int k){
	int j=0,sum=0,ans=0;
	for(int i =0;i<n;i++){
		while(j<n && sum<=k){
			sum+=a[j];
			j++;
		
		}
		ans= max(ans,j-i);
		
		sum-=a[i];
	}
	cout<<ans;
   
    return 1;
}



int main(){

	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int result = subarray(a,n,k);





	return 0;
}