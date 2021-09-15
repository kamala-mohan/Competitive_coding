#include<iostream>
using namespace std;

int sqaureRoot(int n){
	//set up the search space
	int lo =1,hi =n-1;
	int ans = 0;
    while(lo<=hi){
    	int m = lo+(hi-lo)/2;
    	if(m*m == n) return m;
    	else if(m*m > n){
    		hi = m-1;
    	}
    	else{
    		ans = m;
    		lo = m+1;
    	}
    }
    return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<sqaureRoot(n);
}