#include <iostream>
using namespace std;

int findPair(int arr[] , int n ,int S){
	int lo =0;
	int hi= n-1;
	while(lo<hi){
		if (arr[hi]+arr[lo] == S){
			cout<<"found\n";
			return 1;
		}else if(arr[lo]+arr[hi]<S){
			lo++;
		}else{
			hi--;
		}
	}
	cout<<"not found";


}
int main(){
	int n;
	cin>>n;
	int S;
	cin>>S;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	int result = findPair(arr,n,S);
	return 0;
}