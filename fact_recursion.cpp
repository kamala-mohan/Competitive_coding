#include<bits/stdc++.h>
using namespace std;

int fact(int n){
	//base case
	if(n == 1) return 1;
	 //recursive hypothesis
	int temp = fact(n-1);

	//self work
	return n*temp;
}
int main(){

	int n;
	cin>>n;
	cout<<fact(n);
	return 0;
}