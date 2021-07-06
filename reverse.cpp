#include<iostream>
using namespace std;
int main(){
	long long int num,ans =0;
	cin>>num;
	while(num>0){
		int rem = num %10;
		num/=10;
		ans = ans *10 +rem;
	}

	cout<<ans;


	return 0;
}