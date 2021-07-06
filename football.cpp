#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int count_zero = 0 ,count_one = 1;
	for(int i=0;i<s.length();i++){
		if(s[i]=='0'){
			count_zero++;
		    
		if(count_one<7){  
		   count_one = 0;
		}
	
        }
		else if(s[i] == '1'){
			count_one++;
		

		if(count_zero < 7){  
		    count_zero = 0;
		}
	    }
	}
    
	if(count_zero >=7 || count_one >= 7)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}