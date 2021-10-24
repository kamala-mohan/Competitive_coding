#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr){
	for(int i=1;i<arr.size();i++) {  //since we consider first ele as sorted we start the loop from 1st index
		int key = arr[i];
		int j  = i-1;
		while(j>=0 and arr[j]>key){
			arr[j+1] = arr[j];
		    j--;

		}
		arr[j+1] = key;
			
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
	insertionSort(arr);
	for(int i =0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
}