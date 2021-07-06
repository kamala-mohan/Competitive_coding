#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cout<<endl;
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k=1;k<2*i;k++){
			cout<<"* ";

		}
		cout<<endl;
	}

	return 0;

}











// for(int i = 1;i<=n;i++){
// 		cout<<endl;
// 		for(int j = 1;j<=i;j++){
// 			cout<<j<<" ";
// 		}
// 	}









