// #include<iostream>
// using namespace std;
// int main(){
// 	string sum="\0";
// 	string x="abcd";
// 	for(int i=0;i<4;i++){
// 		cout<<x[i]<<" " ;
// 		for(int j=i+1;j<4;j++){
// 			 sum += x[j];
// 			cout<<x[i]<<sum<<" ";
// 		}
// 		sum="\0";

// 	}
// 	return 0;
// }
#include <iostream>
#include<string>
#include<algorithm> //header file used wen we have to sort
using namespace std;
int main(){
	//declaration of a string
	// string str(10,'k');
	// getline(cin,str);  //we use getline when we want string with spaces
	
	
	// string s1="fam";
	// string s2="ily";
	
	// usage of append fxn
	// s1.append(s2);
	// cout<<s1<<endl;


	//without append fxn
	// cout<<s1+s2<<endl;

	//accessing elements in s1
	// cout<<s1[2]<<endl;



	//use of clear fxn
	// string abc="bhashkha hhhjaks hashka ";
	// abc.clear();
	// cout<<abc;

	//use of comapare fxn
	// string s1 = "abc";
	// string s2 = "aqc";
	// cout<<s1.compare(s2)<<endl;  //returns 0 if equal,<0 if the val of the char of the 1st string is small the 2nd,>0 if the second string in greater
	
    

    //check if string is empty
    // string s1="abd";
    // s1.clear();
    // if(s1.empty())
    // 	cout<<"empty string";

    //erase fxn in string
    // string s1="kamalamohan";
    // s1.erase(4,2);   //4 indicates from which index,2 indicates how much to erase

    // find fxn in string
    // cout<<s1.find("mo");  //returns the starting index
    // cout<<s1<<endl;

    //insert fxn in the string
    // s1.insert(2,"lol");  //1st arguement tells which index it has to go
    // cout<<s1<<endl;

    //use of substring fxn
    // string s=s1.substr(10,1);// 10 indicates the index and 1 is the len

    // cout<<s<<endl;

    //convert string to int
    // string s1="786";
    // int x=stoi(s1);
    // cout<<x+2<<endl;

    //convert int to stringh
    // int x=786;
    // cout<<to_string(x) + "2"<<endl;

    //to sort
 //    string s1="110101";
 //    sort(s1.begin(),s1.end());
 //    cout<<s1<<endl;


	//convert from lower to upper
	// string n;
	// cin>>n;
	// cout<<'d'-'D';
	// for(int i=0;i<n.size();i++){
	// 	if(n[i]>='a' && n[i]<='z')
	// 		n[i]-=32;
	// }
	// cout<<n<<endl;
	//  for(int i=0;i<n.size();i++){
	//  	if(n[i]>='A' && n[i]<='Z')
	//  		n[i]+=32;
	//  }
	//  cout<<n<<endl;


	//inbulit fxn for conversion from upper to lower and vice versa
	string s="hsjasjlhal";
	transform(s.begin(),s.end(),s.begin(), ::toupper);
	cout<<s<<endl;

	//to lower
	string s1="KAMALA_AMAZON";
	transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
	cout<<s1<<endl;
	return 0;
}
	
