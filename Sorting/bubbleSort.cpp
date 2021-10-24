#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
	int n = arr.size();
	for(int i = 0;i<n-1;i++) 
	{
		bool is_sorted = false;
		for(int j= 0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			    is_sorted = true;
			}
				
		}
		if(not is_sorted) break;
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
	bubbleSort(arr);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
	}
}