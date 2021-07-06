#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j = 0;
	string s;
	cin>>s;
	int flag = 0;
	string str = "hello";
	for(int i=0;i<5;i++)
	{
		while(s[j]!= '\0')
		{
			if(str[i] == s[j]){
				flag++;	
				j++;
				break;
			}
			else
				j++;
			
		}
	}
	if(flag == 5){
		cout<<"YES";

	}
	else{
		cout<<"NO";
	}
	return 0;
}