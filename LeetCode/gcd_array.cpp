#include<iostream>
using namespace std;

int gcd(int a,int b){
	if(b==0)
		return a;
	if(b>a) return gcd(b,a);
	return gcd(b,a%b);

}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int min_num = arr[0];
	int max_num = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i] < min_num){
			min_num = arr[i];
		}
		if(arr[i]> max_num){
			max_num = arr[i];
		}

	}
	cout<<gcd(min_num,max_num);
	return 0;
}
