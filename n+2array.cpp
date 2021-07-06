#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    
    int *arr = new int[n+3]; //n+3 because values are in range 1 to n+2
    for(int i=0; i<n+3; ++i)
        arr[i] = 0;

    
    for(int i=0; i<n; ++i){
        int val; cin>>val;
        arr[val] = 1; // 1 means it is present
    }
    
    int x;
    for(int i=1; i<n+3; ++i){
        if(arr[i]==0){
            x=i; 
            arr[i] = 1;  //doing this so when finding y, I don't go over this 'i' again
            break;
        }
    }
    
    int y;
    for(int i=1; i<n+3; ++i){
        if(arr[i]==0){
            y=i; 
            arr[i] = 1;
            break;
        }
    }
    
    cout<<x<<' '<<y<<endl;
    
    return 0;
}