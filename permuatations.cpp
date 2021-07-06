#include<bits/stdc++.h>
using namespace std;

void permu (string str,string osf){
	if(str.size()==0){
		cout<<osf<<endl;
		return;
	}
	for(int i=0;i<str.size();i++){
	char ch = str[i];
	permu(str.substr(0,i)+str.substr(i+1),osf+ch);
    }
}

int main(){
	permu("abc","");
	return 0;
}