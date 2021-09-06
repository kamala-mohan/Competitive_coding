#include<iostream>
using namespace std;

int totalPaths = 0;
void mazePath(int i,int j,int n,int m,string osf){

	if(i == n-1 and j == m-1){
		totalPaths += 1;
		cout<<osf<<endl;          //base case1 wen it reaches the desn
		return;
	}
	if(i>=n or j>=m){
		return;                  //base case2 wen its out of bound
	}

	mazePath(i,j+1,n,m,osf + "r"); //this appends a right to recursive path
	mazePath(i+1,j,n,m,osf + "d"); //this appends a  down to the recusrsive path
	mazePath(i+1,j+1,n,m,osf+"w"); //this appends a "diagonal" to all the diagonal paths

}

int main(){
	int n,m;
	cin>>n>>m;
	int **arr = new int*[m]; //array of pointers
	mazePath(0,0,n,m,"");
	cout<<"Total paths = "<<totalPaths<<endl;
	return 0; 
}