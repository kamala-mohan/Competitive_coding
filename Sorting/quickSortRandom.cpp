#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int lo,int hi){
	int m = lo;
	int pivot = hi;
	for(int i = lo;i<hi;i++){
		if(arr[i]<arr[pivot]){
			swap(arr[i],arr[m]);
			m++;
		}
	}
	swap(arr[pivot],arr[m]);
	return m;


}

int randomPivotAlgo(vector<int> &arr,int lo,int hi){
	int n = rand();
	int pivot = lo + (n%(hi-lo+1));
	swap(arr[pivot],arr[hi]);
	return partition(arr,lo,hi);
}


void quickSort(vector<int> &arr,int lo,int hi){

	//to stop the recursion
	if(lo<hi){
		int pivot_index = randomPivotAlgo(arr,lo,hi);
		quickSort(arr,lo,pivot_index-1);
		quickSort(arr,pivot_index+1,hi); 										
	}
}
int main(){
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++){
		cin>>arr[i];

	}
	quickSort(arr,0,n-1);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}