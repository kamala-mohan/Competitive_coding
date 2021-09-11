#include<iostream>
#include<vector>
#define vvb  vector<vector<bool>>
using namespace std;

int count = 0;
bool isItSafe(vvb grid,int row,int col,int n){
	//col check ->col remains the same row keeps changing
	int i,j;
	for(i =row-1;i >=0 ;i--){
		if(grid[i][col]) return false; 
	}
	//left upper diagonal check
	for(i =row-1, j = col-1;i>=0 and j>=0 ;i--,j--){
		if(grid[i][j]) return false;
	}

	//right upper diagonal
	for(i = row-1,j = col+1;i>=0 and j<n;i--,j++){
		if(grid[i][j]) return false;
	}
    return true;
}
void display(vvb &grid,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[i][j])
				cout<<"Q ";
			else
				cout<<"- ";
		}
		cout<<endl;
	}
	cout<<"\n\n";

}

void countNQueen(vvb &grid,int cr,int n){
	//base case
	if(cr == n){
		//we found a valid path
		count++;
		display(grid,n);
	    return;
	}
	for(int i=0;i<n;i++){
		if(isItSafe(grid,cr,i,n)){
			grid[cr][i] =true;
			countNQueen(grid,cr+1,n);
			grid[cr][i] = false;
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<vector<bool> > grid(n,vector<bool>(n,false));    //vector<bool>(n,false) means vector has n elements which is initialized with false
    countNQueen(grid,0,n);
    cout<<count<<endl;
}

