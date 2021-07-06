#include<iostream>
using namespace std;
int spiralArray(int **arr,int n,int m){
	int i;//iterator
	int k=0;//starting row index
	int l=0;//starting col index
	//n is the ending row index
	//m is the ending col index
	while(k<n && l<m){
		for(int i=l;i<m;i++)
			cout<<arr[k][i]<<" ";
	    k++;


	    for(int i=k;i<n;i++)
	   	    cout<<arr[i][m-1]<<" ";
	    m--;

   

	    if(k<n){
		  for(int i=m-1;i>=l;i--)
			cout<<arr[n-1][i]<<" ";
		n--;
	    }

	    if(l<m){
		  for(int i=n-1;i>=k;i--)
			cout<<arr[i][l]<<" ";
		l++;
	    }
	    

    } 

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
	spiralArray(arr,n,m);


	return 0;
}