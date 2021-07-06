#include <iostream>
#include<string>
using namespace std;
int main(){
	string n;
	cin>>n;
	
	int s3=n.length();
	

	string s= n.substr(0,1);
	string s1 = n.substr(s3-1,1);
	
	if(s == "1" && s1 == "1"){
		cout<<"accepted";
	}
	else{
		cout<<"not accepted";
	}

	// string s="101101";
	// int s1= s.size();

	// // string s1=s.substr(0,1);
	// cout<<s1;
	return 0;
}