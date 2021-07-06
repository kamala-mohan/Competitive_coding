#include <iostream>
using namespace std;
int main(){
	long long int x;
	cin>>x;
	if(x%2 ==0){
		cout<<((x*x)/4)-1<<" "<<x<<" "<<((x*x)/4)+1<<" " ;

	}else{
		cout<<x<<" "<<(x*x - 1)/2<<" "<<(x*x+1)/2;	}
}