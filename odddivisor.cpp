#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{


	int n;
	cin>>n;


	while(n%2 == 0){
		n/=2;
	}
	if(n==1){
		cout<<"no";
	}else{
		cout<<"yes";
	}
    }





	return 0;
}