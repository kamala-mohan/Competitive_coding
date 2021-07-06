#include<iostream>
using namespace std;
int waveArray(int **arr,int n,int m){
	// cout<<m<<endl;
	int w = m;

	while(w--){
		
		if(w%2==0){
			for(int i=0;i<n;i++)
				cout<<arr[i][w]<<" ";
			// cout<<m<<endl;
		}
	    else{
			for(int i=n-1;i>=0;i--)
				cout<<arr[i][w]<<" " ;
			// cout<<m<<endl;
		}
		

	}
	return 0;
}

int main(){
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]= new int[m];
    }
    for(int i=0;i<m;i++){                   //iterate to all rows
		for(int j=0;j<m;j++){               //iterate to all cols
			cin>>arr[i][j];

		} 
	}
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<m;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	} 
	// 	cout<<endl;
	// }
    waveArray(arr,n,m);

	return 0;
}