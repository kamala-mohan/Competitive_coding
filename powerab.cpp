#include<iostream>
using namespace std;
int main() {
	//logb with base 2
	// int a,b;
	// cin>>a>>b;
	// long long int result =1;
	// while(b>0){
	// 	if(b%2!=0){
	// 		result = result *a;

	// 	}
	// 	b = b/2;
	// 	a = a*a;
	// }
 //    cout<<result;


	int a,b;
	cin>>a>>b;
	long long int res = 1;
	while(b>0){
		if(b%2!=0){
			res = res * a;
		}

	    b = b/2;
	    a = a*a;

	}
		cout<<res;
	
   
	return 0;
}