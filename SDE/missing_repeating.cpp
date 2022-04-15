#include<bits/stdc++.h>
using namespace std;

void getElements(int *arr,int n,int &x,int &y){
	int xor_no = 0;
	int set_bit;
	for(int i =0;i<n;i++){
		xor_no = xor_no ^ arr[i];
	}
	for(int i =1;i<=n;i++){
		xor_no = xor_no ^ i;
	}

	set_bit = xor_no & ~(xor_no -1);

	for(int i =0;i<n;i++){
		if(arr[i] & set_bit)
			x = x^arr[i];
		else
			y = y^arr[i];
	}

	for(int i =1;i<=n;i++){
		if(i & set_bit)
			x = x^i;
		else
			y = y^i;
	}


}

int main(){
	int arr[]= {1,4,2,3,2};
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	getElements(arr,n,x,y);
	cout<<"Missing number is"<<x <<"repeating number is"<<y;
	return 0;
}
