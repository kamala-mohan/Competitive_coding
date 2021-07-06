// #include<iostream>
// using namespace std;
// int main(){
// 	string str;
// 	char x;
// 	int y=0;
// 	cin>>str;
// 	cin>>x;
// 	int n=str.length();
// 	for(int i=0;i<n;i++){
// 		if(str[i]==x)
// 	    y++;
// 	}
// 	cout<<y<<endl;
// 	return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;
int main()
{

	string s;

	    char x;
	    int count=0,y,ans;
		cin>>s>>x>>y;
	    for (int j=0;j<s.length();j++)
	    {
	    	if (s[j]==x) count++;
		}
		if (count>=y) ans=pow(2,s.length() - y - 1);
		else ans = 0;
		cout<<ans<<endl;

	
	return 0;
}