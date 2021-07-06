#include <iostream>
using namespace std;
int main()

{
	int x,y,z;
	cin>>x>>y>>z;
	int v1,v2,v3;
	int sum = ((x+y+z)/2);
	cout<<sum<<" ";
	v1 = sum-(y);
    v2 = sum-(z);
    v3 = sum-(x);
    cout<<v1<<" " <<v2<<" " <<v3;

	/* code */
	return 0;
}