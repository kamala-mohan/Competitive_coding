#include<bits/stdc++.h>
using namespace std;

//	1. use of fxn pointer

// int foo(int n){
// 	cout<<"hello"<<" "<<n;
// 	return 0;
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int(*ptr)(int n) = foo;  //fxn pointers passing with argv
// 	ptr(n);
// 	// cout<<ptr<<endl;

// }

// 2.using auto keyword

// void hello(char ch){
// 	cout<<"hey there!"<<ch;
// }
// int main(){
// 	char ch = 'K';
// 	void(*fptr)(char) = &hello;
// 	fptr(ch);
// 	return 0;
// }

// 3. passing one fxn into another
// void wow(string str){
// 	cout<<"WOW!!"<<str<<" "<<"congrats for your new job at Google!";
// }
// void hello(char ch,void (*sptr)(string) ){
// 	sptr("Kamala");
// 	cout<<"HAPPY!!"<<endl;
// }
// int main(){
// 	hello('k',wow);
// 	return 0;
// }

// 4.array of fxn pointers
void wow(string str){
	cout<<"WOW!!"<<str<<" "<<"congrats for your new job at Google!";
}
void hello(string str){
	cout<<"HAPPY!!"<<str<<endl;
}

int main(){
	void(*ptr[])(string) = {wow,hello};
	(ptr[0])("Kamala");
	(ptr[1])("US");
	return 0;
}
