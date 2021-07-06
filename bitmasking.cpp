#include<iostream>
using namespace std;

void candidate(int arr[],int n){
    int number=0;
	int len = sizeof(int)*8;
	cout<<len<<" ";
	
	for(int i=0;i<len;i++){
		int count=0;
		for(int j=0;j<n;j++){
			if(arr[j]&(1<<i))
				count++;
			
		}
		if(count>(n/2))
			number+=(1<<i);
		    // cout<<number<<" " ;
		    
	}

int count=0;
for(int i=0;i<n;i++){
	if(arr[i]==number)
		count++;
}
if(count>(n/2)){
	cout<<number;
}else{
	cout<<"no majority number";
}

}

int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int arr[5] = {2,3,4,3,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	candidate(arr,n);
	return 0;

}