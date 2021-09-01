#include<iostream>
using namespace std;

bool isPrime(int n){
	static int i = 2;
	if(n == i)
		return true;
	//base case
	if(n%i == 0){
		return false;
	}
	i++;
	return isPrime(n);
}


int main(){
	int n;
	cin>>n;
	isPrime(n)? cout<<"prime" : cout<<"not prime"<<endl;
}