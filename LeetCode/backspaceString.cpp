#include<iostream>
#include<string>
using namespace std;

//using strings
bool check(string s1,string s2){
	
	string res1 = "",res2 = "";
	int i=0;
	while(s1[i]!='\0'){
		if(s1[i]>='a' and s1[i]<='z')
			res1.push_back(s1[i]);
		
		else if(!res1.empty())
			res1.pop_back();
		++i;
		
	}
	i =0;
	while(s2[i]!='\0'){
		if(s2[i]>='a' and s2[i]<='z')
			res2.push_back(s2[i]);
		
		else if(!res2.empty())
			res2.pop_back();
		++i;
		
	}
	if(res1.compare(res2) == 0)
		return true;
	return false;

}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	cout<<check(s1,s2);
	return 0;
}