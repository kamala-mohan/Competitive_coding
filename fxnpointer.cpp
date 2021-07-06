#include<iostream>
using namespace std;
int add(int x,int y){
	return x+y;
}
int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif



	int (*fp)(int,int)=add;
	int res=(*fp)(1,2);
	cout<<res;
	return 0;
}