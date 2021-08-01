#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
  
	while(t--){
		int result= 0,flag=0;
		int n,d,h;
		cin>>n>>d>>h;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=0;i<n;i++){
			if(arr[i]>0)
				result = result + arr[i];
			else
			{
				if(result<d)
				    result = 0;
			    else
			    	result = result - d;
			}
			if(result>h){
				flag = 1;
				break;
			}
		
		} 
		if(flag == 1){
			cout<<"YES"<<endl;
		}
		else
		    cout<<"NO"<<endl;


	}     
	return 0;
}