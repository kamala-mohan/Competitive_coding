#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int res = sum - min(a,min(b,c));
        cout<<res<<endl;

    }   
	return 0;
    
}