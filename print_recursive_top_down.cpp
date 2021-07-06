#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
	int i=0;
	if(n==0) return;
	pattern1(n-1);
	
	if(i<n){
		cout<<"* ";
		pattern1(i+1);
	}
	else{
		cout<<"no";
	
	}

	
	
}


int main(){

	pattern1(3);
	return 0;
}


	

