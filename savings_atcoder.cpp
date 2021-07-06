#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;cin>>n;
	int res = n/2;
	int sum =0,count=0;
	for(int i=1;i<res;i++){
		sum =sum+i;
		count++;
		if(sum>=n)
			break;
	}
	cout<<count;
	
	return 0;
}