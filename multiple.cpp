#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x = (n-1)/3;
    int y = (n-1)/5;
    int z = (n-1)/15;

    int sum_of_3 = ((x)*(2*3 + (x-1)*3))/2;
    int sum_of_5 = ((y)*(2*5 + (y-1)*5))/2;
    int sum_of_15 = ((z)*(2*15 + (z-1)*15))/2;

    int ans = (sum_of_3 + sum_of_5) - sum_of_15;
    cout<<ans;
	return 0;

}