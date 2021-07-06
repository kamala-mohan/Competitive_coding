#include<bits/stdc++.h>  
using namespace std;  
int main()  
{  
    /* Scan array size */  
    int n;  
    cout<<"Enter array size:";  
    cin>>n;  
      
    /*Scan array elements */  
    int arr[n];  
    cout<<"\nEnter array elements: ";  
    for(int i = 0; i < n; i++)  
    cin>>arr[i];  
      
    int res = -1;  
    /* Count frequency of each element */  
    for(int i = 0; i < n; i++)  
    {  
        int count = 0;  
        /* Count occurrence of each element of the array */  
        for(int j = 0; j < n; j++)  
        {  
            if(arr[i] == arr[j])  
            count++;  
        }  
        /* If count > (n/2), it's majority element */  
        if(count > (n/2))  
        {  
            res = arr[i];  
            break;  
        }  
    }  
    /* Print the result */  
    if(res == -1)  
    {  
        cout<<"\nNo majority element!!";  
    }  
    else  
    {  
        cout<<"\n"<<res<<" is majority element of the array!!";  
    }  
}  
