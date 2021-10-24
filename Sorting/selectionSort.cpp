//firsty create an array with eles unsorted
//run a loop and find the min ele in the array 
//and then swap it with the ith ele

#include<bits/stdc++.h>
using namespace std;

int findMinIdx(vector<int> &arr,int i){
	int min_idx = i;
	while(i<arr.size()){
		if(arr[i] < arr[min_idx]){
			min_idx = i;
		}
		i++;
	}
	return min_idx;
}
void selectionSort(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		int min_idx = findMinIdx(arr,i);      //i cuz the unsorted region lies from i to n-1
		if( i!= min_idx) swap(arr[i],arr[min_idx]);
	}
}

int main(){
	vector<int>arr;
	int n;
	cin>>n;
	while(n--){
		int x;
		cin>>x;
		arr.push_back(x);
	}
	selectionSort(arr);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
	}
}
