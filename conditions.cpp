#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	// if(n%2==0){
	// 	cout<<"even";
	// }else{
	// 	cout<<"odd";
	// }
	//0-->0,1->01,2->10,3->11,4->100,5->101
	//101 & 001 ->001 ->odd
	//4 -> 100 & 001 ->000 ->even
	if((n&1) == 1) {
		cout<<"odd";
	}else{
		cout<<"even";
	}
	return 0;
}