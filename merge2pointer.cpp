#include<iostream>
using namespace std;

int *merge_array(int *a1, int *a2, int n, int m){
	int *result = new int[m+n];
	int lo = 0,hi = 0 , k = 0;
	while(lo<n && hi<m){
		if(a1[lo]<a2[hi]){
			result[k++] = a1[lo++];
		}else{
			result[k++]=a2[hi++];
		}
	}
	while(lo<n){
		result[k++] = a1[lo++];

	}
	while(hi<m){
		result[k++]=a2[hi++];
	}
	cout<<result<<endl;
	
	return result;

}

int main(){
	int n,m;
	cin>>n>>m;
	int a1[n];
	int a2[m]; 
	for(int i=0;i<n;i++) {
		cin>>a1[i];
	}
	for (int i=0;i<m;i++) {
		cin>>a2[i];
	}


	int *retval = merge_array(a1,a2,n,m);
	for(int i =0;i<m+n;i++){
		cout<<retval[i]<<" ";
	}
	cout<<endl;
	cout<<retval<<endl;
	return 0;
}