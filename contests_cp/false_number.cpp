#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		if(str[0]!='1')
		{
		    str = '1' + str;
		    
	    }

	    else if(str[0] == '1')
	    {
		    string str1 = "0";
		    str.insert(1,str1);
		}
	cout<<str<<endl;
	
   }
   return 0;

}

	
	
