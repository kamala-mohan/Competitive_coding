#include<iostream>
using namespace std;

int missingElement(int arr[],int n){
    int x1=arr[0];
    int x2=1;
    for(int i=1;i<n-1;i++)
        x1=x1^arr[i];
    
    for(int i=2;i<=n;i++)
        x2=x2^i;

    
    return(x1^x2);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int res= missingElement(arr,n);
    cout<<res<<endl;
    return 0;

}