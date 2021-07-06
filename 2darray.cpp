#include<iostream>
using namespace std;
int main(){
// #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

	// int arr[3][4];//created a 2d array

	// for(int i=0;i<3;i++){                   //iterate to all rows
	// 	for(int j=0;j<4;j++){ //iterate to all cols
	// 		cin>>arr[i][j];

	// 	} 
	// }
	// //display
	// for(int i=0;i<3;i++){
	// 	for(int j=0;j<4;j++){
	// 		cout<<arr[i][j]<<" ";
	// 	} 
	// 	cout<<endl;
	// }
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
	//display
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<twodarr[i][j]<<" ";
		} 
		cout<<endl;
	}
	//to delete the 2d at the heap
	for(int i=0;i<n;i++){
		delete arr[i];
	}
	//this deletes all the 1d manually at the heap

	return 0;

}