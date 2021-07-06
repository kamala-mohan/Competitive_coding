#include <iostream>
using namespace std;
int main()

{
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
// reference of variable
	int x =10;
	int& y = x;
	cout<<x<<endl;
	cout<<y<<endl;
	y =12;
	cout<<x<<endl;
	cout<<y<<endl;


	/* code */
	return 0;
}