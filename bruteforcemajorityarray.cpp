#include<iostream>
using namespace std;

int ele(int a[],int n){
	
	for(int i=0;i<n;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j]) count++;
		}
		if(count>(n/2)){
			cout<<a[i];
			break;
		}
	}
	// return a[i];
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];


	ele(a,n);
    return 0;

}