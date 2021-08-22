#include<bits/stdc++.h>
using namespace std;
int main(){
	string word;
	cin>>word;
	int seconds =  word.length();
	char init = 'a';
	for(auto cur : word)
	{

	    int clock = abs(init - cur);
        int anti = 26 - abs(init - cur);
        seconds = seconds + min(clock,anti);
        init = cur;
    }
    cout<<seconds<<endl;
	return 0;
}