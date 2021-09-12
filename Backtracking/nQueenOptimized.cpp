#include<iostream>
#include<bitset>
using namespace std;

//instead of bool array we use bitset which is comparatively optimized,in bitset by deafult everything is zero
bitset<100> col,ld,rd;      //using this we are solving in O(n)
int count = 0;
void nQueen(int n,int cr){
	if(cr == n){
		count++;
		return;
	}
	//for col 
	for(int c=0;c<n;c++){
		if(!col[c] and !ld[cr-c+n-1] and !rd[cr+c]){
			col[c] = ld[cr-c+n-1] = rd[cr+c] =1;
			nQueen(n,cr+1);
			col[c] = ld[cr-c+n-1] = rd[cr+c] = 0;
		}
	}
}

int main(){
	int n;
	cin>>n;
	nQueen(n,0);
	cout<<count;
	return 0;

}