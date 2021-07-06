#include<iostream>
using namespace std;


bool isPresent(int **arr,int n ,int m,int x){
	int i=0,j=n-1
	while(i<n and j>=0){
		if(arr[i][j]==x) return true;
		else if(arr[i][j]>x){
			j--;
		}else{
			i++;
		}
	}
	return false; 
}


int main()
{
	int n,m;
	cin>>n>>m;
	int **twodarr=new int*[n];
	for(int i=0;i<n;i++){
		twodarr[i]= new int[m];
    }
    for(int i=0;i<n;i++){                   //iterate to all rows
		for(int j=0;j<m;j++){               //iterate to all cols
			cin>>twodarr[i][j];

		} 
	}

	int x;
	cin>>x;
	

	return 0;

}