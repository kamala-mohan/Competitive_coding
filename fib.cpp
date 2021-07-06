#include<iostream>
using namespace std;
int main () {

	long long int n = 40000000000000000L;
	long long int a = 0,b =1,c;

    cout<<a<<endl;
	while(c<=n){
		c = a+b;
		cout<<c<<endl;
		a =b;
		b = c;
	}




	return 0;
}