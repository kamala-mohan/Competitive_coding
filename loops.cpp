#include<iostream>
using namespace std;
int main (){

// 	for(int i = 0;i<10;i++){
// 		cout<<i<<" ";
// 	}                             //pair of curly brackets defines a block
// int i =0;
// while(i<=15){
// 	cout<<i<<" ";
// 	i++;
// }

	int a = 4;
	int b = 7;
	int ans =1;
	// for (int i=1;i<=b;i++){
	// 	ans = ans*a;
	// }

	int i =1;
	while(i<=b){
		ans = ans*a;
		i++;
	}
	cout<<ans;
	return 0;

}