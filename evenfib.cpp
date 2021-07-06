#include<iostream>
using namespace std;
int main(){
	long long int n = 40000000000000000L;
	long long int a =0,b=2,c,res;
	cout<<a<<endl;
	cout<<b<<endl;
	while(c<=n){
		c = 4*b + a;
		res = res + c +  a + b ;
		cout<<res;

		a=b;
		b=c;

	}




	return 0;
}