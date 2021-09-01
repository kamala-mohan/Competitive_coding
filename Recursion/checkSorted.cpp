#include<iostream>
using namespace std;

// int checkSort(int *arr,int n){
// 	if(n == 1 || n == 0){
// 		return 1;
// 	}
// 	if(arr[n-1]<arr[n-2])
// 		return 0;

// 	checkSort(arr,n-1);
// }

// int main(){
// 	int n;
// 	cin>>n;
// 	int *arr = new int[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	if(checkSort(arr,n)){
// 		cout<<"yes";
// 	}
// 	else{
// 		cout<<"no";
// 	}
// 	return 0;

// }







//approach 2

bool sortOrNot(int *arr,int n){
	if(n==1 || n == 0){
		return true;
	}

	return arr[n-1]>=arr[n-2] && sortOrNot(arr,n-1);
}

int main(){
	int n;
	cin>>n;
	int *arr = new int[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(sortOrNot(arr,n)){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;

}
