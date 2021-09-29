#include<iostream>
using namespace std;

void missingRepeating(int *arr,int n,int x,int y){
	int xor1 = 0;
	for(int i =0;i<n;i++){
		xor1 = xor1 ^ arr[i]; 
	}
	for(int j = 1;j<=n;j++){
		xor1 = xor1 ^ j;
	}
	int sit_bit = xor1 & ~(xor1 - 1);

	for(int k = 0;k<n;k++){
		if(arr[k] & sit_bit)
			x = x ^ arr[k];
		else
			y = y ^ arr[k];
	}
	for(int k = 1;k<=n;k++){
		if(k & sit_bit)
			x = x ^ k;
		else
			y = y ^ k;
	}
	cout<<x<<" "<<y<<endl;

}
int main(){
	int arr[] = {1,1,2,3,5};
	int n = 5;
    int x = 0,y = 0;
    missingRepeating(arr,n,x,y);
}