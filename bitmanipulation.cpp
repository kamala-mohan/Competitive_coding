#include<iostream>
using namespace std;

bool checkIfSitOrNot(int n,int k){
	return n & (1<<k);
}
void toSetBit(int n ,int k){
	return n | (1<<k);
}
void clearKthBit(int n,int k){
	return n & (~(1<<k));
}

void toggleKthBit(int n,int k){
	return n ^ (1<<k);
}
int clearAllBitsExceptRightmost(int n){
	return (n & (-n));
}
int multiplyByPowerOfTwo(int n,int k){
	return (n<<k);
}
int divideByPowerOfTwo(int n,int k){
	return (n>>k);
}
int powerOfTwo(int k){
	return (1<<k);
}
int divideOfTwo(int k){
	return (n>>1);
}
bool checkPowerOfTwo(int n){
	return (n & n-1)==0;
}
int countSitBits(int n){
	int count=0;
	while(n>0){
		n =n & n-1;
		count++;
	}
}
int countSitBits(int n){
	cout<<__builtin_popcount(n);
}

int main(){
	return 0;
}