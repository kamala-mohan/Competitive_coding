#include<iostream>
#include<vector>
#define vvb vector<vector<bool>>
using namespace std;

void display(vvb &grid,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(grid[i][j])
				cout<<"K ";
			else
				cout<<"- ";
		}
		cout<<endl;
	}
	cout<<"\n\n";
}

bool isItSafe(int r,int c,vvb &grid,int n){
	if(r-2>=0 and c-1>=0 and grid[r-2][c-1]) return false;
	if(r-1>=0 and c-2>=0 and grid[r-1][c-1]) return false;
	if(r-2>=0 and c+1<n  and grid[r-2][c+1]) return false;
	if(r-1>=0 and c+2<n  and grid[r-1][c+2]) return false;
	return true;

}
int ans = 0;
void nKnights(int n,vvb &grid,int cr,int cc,int count){
	//base case
	if(count == n){
		ans++;
		display(grid,n);
		return;
	}
	for(int i=cr;i<n;i++){
		for(int j=(i==cr)?cc:0;j<n;j++){
			
			if(isItSafe(i,j,grid,n)){
				grid[i][j] = true;
				nKnights(n,grid,i,j+1,count+1);
				grid[i][j] = false;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	vector<vector<bool>> grid(n,vector<bool>(n,false));
	nKnights(n,grid,0,0,0);
	cout<<ans<<endl;
}