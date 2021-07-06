#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int result = 0;
	int x = 5;
	while((n/x)>0){
		result += (n/x);
		x = x*5;
	}
	cout<<result;



	return 0;
}