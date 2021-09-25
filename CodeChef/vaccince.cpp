#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,l,r;
        cin>>d>>l>>r;
        if(d<l){
            cout<<"Too Early"<<endl;
        } 
        if(d>r){
            cout<<"Too Late"<<endl; 
        }
        if(d>=l and d<=r)
        {
            cout<<"Take second dose now"<<endl;
        }
    }
    return 0;
   
}



   