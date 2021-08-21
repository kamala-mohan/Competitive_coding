#include<iostream>
using namespace std;

int n = 1000000;
bool arr[1000000];

void createSieve(){
	for(int i = 2;i<=n;i++)
		arr[i] = true;

	for(int i=2;i*i<=n;i++){
		if(arr[i]== true)
			for(int j=i*i;j<=n;j+=i){
				arr[j] = false;
			}
	}
}

int main(){

	createSieve();
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		if(arr[k] == true){
			cout<<"YES";
		}
		else{
			cout<<"no";
		}
	}
    return 0;
}