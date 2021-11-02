#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int lo,int mid ,int hi)
{
    int i = lo,j= mid+1,k=0;
    int temp[hi - lo+1];
    while(i<=mid && j<=hi)
    {
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            k++,i++;
        }
        else
        {
            temp[k] = arr[j];
            k++,j++;
        }
    }
    while(i<=mid)
    {
        temp[k] = arr[i];
        k++,i++;
    }
    while(j<=hi)
    {
        temp[k] = arr[j];
        k++,j++;
    }
    for(int i=lo;i<=hi;i++){
        arr[i] = temp[i-lo];
        cout<<lo;
    }
}
void mergesort(int *arr,int n,int lo,int hi)
{
    if(n==1) return;
    if(lo<hi)
    {
        int mid = ((lo+hi)/2);
        mergesort(arr,n,lo,mid);
        mergesort(arr,n,mid+1,hi);
        merge(arr,lo,mid,hi);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,n,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }
    
    return 0;
}


   
