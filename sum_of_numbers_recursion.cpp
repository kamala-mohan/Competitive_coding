#include<bits/stdc++.h>
using namespace std;

void print_inc(int n){
	if(n==0)return;
	//resursive assumption
	cout<<n<<endl;
	print_inc(n-1);
	if(n==1)return;
	cout<<n<<endl;

}

int main(){
    print_inc(5);
	return 0;
}