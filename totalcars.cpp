#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	int ans = 0,ck = 0;
	int arr[27] = {0};
	int x,y; cin>>x>>y;
	for(int i=x-1;i<=y;i++){
        ck = (s[i] -'a'+1);
        if(ck%2==0 && arr[ck-1] == 0){
    	    ans++;
            arr[ck-1]++;
        }
    }
    cout<<ans;


    return 0;



}