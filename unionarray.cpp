#include<iostream>
using namespace std;

int *unionArray(int *a1,int *a2,int n,int m){
	int *result = new int[n+m];
	int lo = 0,hi =0,k=0;
	while(lo<n && hi<m){
		if(a1[lo] == a2[hi]){
			result[k++]= a1[lo];
			lo++;
			hi++;
		}else if(a1[lo]> a2[hi]){
			result[k++] =a2[hi++];
			
		}else{
			result[k++] = a1[lo++];
			
		}
	}
	while(lo<n){
		result[k++] = a1[lo++];

	}
	while(hi<m){
		result[k++]=a2[hi++];
	}
	// cout<<result<<endl;
	
	return result;

}

int main(){
	int n;
	cin>>n;
	int a1[n];
	int m;
	cin>>m;
	int a2[m];
	for(int i=0;i<n;i++) {
		cin>>a1[i];
	}
	for(int i=0;i<m;i++){
		cin>>a2[i];

	} 

	int *res = unionArray(a1,a2,n,m);
    for(int i=0;i<n+m;i++){
    	cout<<res[i]<<" ";
    }
    // cout<<res<<endl;
    return 0;
}