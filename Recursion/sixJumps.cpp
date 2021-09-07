#include<iostream>
using namespace std;


void sixJumps(int n,int i,string osf){
	if(i>=n) return;          //base case 1: out of range is invalid
	if(i == n-1){
		cout<<osf<<endl;       //base case 2: wen it reaches the (n-1)th cell then we get a valid path 
		return;
	}
	for(int j=1;j<=6;j++){
		sixJumps(n,i+j,osf+to_string(j)+"->");
	}

}

int main(){
	sixJumps(4,0,"");
	return 0;
}