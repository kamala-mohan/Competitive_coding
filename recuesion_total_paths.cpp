#include<bits/stdc++.h>
using namespace std;

int totalPaths = 0;
void mazePath(int i,int j,int n,int m,string osf){
	if(i==n-1 and j== m-1){
		totalPaths = totalPaths+1;
		cout<<osf<<endl;
	}
	if(i>=n or j>=m){
		return;
	}
	mazePath(i,j+1,n,m,osf+'R');
	mazePath(i+1,j,n,m,osf+'D');
}
int main(){
	mazePath(0,0,3,3,"");
	cout<<totalPaths<<endl;
	return 0;
}