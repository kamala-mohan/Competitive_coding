#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result = 0;
	for (int i = 0;i<n;i++){
		int x;
		cin>>x;
		result ^=x;

	}
	cout<<result;


	return 0;
}