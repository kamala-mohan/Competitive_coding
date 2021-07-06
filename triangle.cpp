#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	cin>>s1>>2>>s3;
	if((s1+s2>s3) && (s2+s3>s1) && (s1+s3>s2))
	{
		cout<<"triangle";
	}
	else
		cout<<"not a triangle";
	

	return 0;
}