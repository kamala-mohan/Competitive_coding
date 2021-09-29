#include<iostream>
using namespace std;

int main(){
	int arr [] = {-2,1,-3,4,-1,2,1,-5,4};
	int sum =0;
	int max1 = arr[0];
	for(int i=0;i<9;i++){
		sum = sum + arr[i];
		max1 = max(max1,sum);
		if(sum<0){
			sum = 0;
		}
	}
	cout<<max1<<endl;
	return 0;
}