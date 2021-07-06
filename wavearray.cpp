#include<iostream>
using namespace std;
int waveArray(int **arr,int n,int m){
	int i=0,j=0,wave=0;
	while(j<m){
		if(wave==0)
			for(int i=n-1;i>=0;i--){
				cout<<arr[i][j]<<" " ;
				
			}
			wave++;
			j++;
		if(wave==1)
			for(int i=0;i<n;i++){
				cout<<arr[i][j]<<" ";
			}
			
			wave--;
			j++;
	}
}


int main(){
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]= new int[m];
    }
    for(int i=0;i<n;i++){                   //iterate to all rows
		for(int j=0;j<m;j++){               //iterate to all cols
			cin>>arr[i][j];

		} 
	}
	waveArray(arr,n,m);
	for(int i=0;i<n;i++){
		delete arr[i];
	}
	return 0;
}