#include<iostream>
using namespace std;
int main(){
	int chunk_cnt = 0;
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];


	int right_min[m];
	// right_min[m-1] = arr[n-1];
	// cout<<right_min[m-1]<<endl;
	for(int i=m-1;i>0;i--)
		right_min[i-1] = min(right_min[i],arr[i-1]);
    
    // for(int i=0;i<m;i++)
    // 	cout<<right_min[i]<<" ";

	int max_so_far = arr[0];
	for(int i=0;i<m;i++){
		if(max_so_far < right_min[i]){
			max_so_far = right_min[i];
			chunk_cnt++;

		}

	}
	chunk_cnt++;
	cout<<chunk_cnt<<endl;
	return 0;

}