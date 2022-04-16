//Gap algorithm
#include<bits/stdc++.h>
using namespace std;

int nextGap(int n){
	if(n<=1)
		return 0;
	return (n/2) + (n%2);
}

void mergeArray(int *arr1,int *arr2,int &n,int &m)
{
	int gap = n+m;
	int i,j;
	for(gap = nextGap(gap);gap>0;gap = nextGap(gap)){

		//in the first Array
		for( i = 0;i+gap<n;i++)
			if(arr1[i] > arr1[i+gap])
				swap(arr1[i],arr1[i+gap]);

		//Comparing in 2 arrays
		for( j = 0;i<n && j<m;i++,j++)
			if(arr1[i] > arr2[j])
				swap(arr1[i],arr2[j]);

        if(j<m){
        	for( j =0;j + gap<m;j++)
        		if(arr2[j] > arr2[j+gap])
        			swap(arr2[j],arr2[j+gap]);
        }
	}
}


int main(){
	int arr1[] = {40,67,89,90,100};
	int arr2[] = {2,3,56};
	int n = sizeof(arr1)/sizeof(arr1[0]);
	int m = sizeof(arr2)/sizeof(arr2[0]);
	mergeArray(arr1,arr2,n,m);

	cout<<"First array ele are : ";
	for(int i = 0;i<n;i++){
			cout<<arr1[i]<<" ";
		}

	cout<<"Second array ele are : ";
	for(int j = 0;j<m;j++){
		cout<<arr2[j]<<" ";
	}
	return 0;
}
