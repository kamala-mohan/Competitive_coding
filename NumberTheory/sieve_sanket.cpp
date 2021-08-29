#include<iostream>
#include<bits/stdc++.h>
#define MAX 1000000
#define ll long long int
using namespace std;
bitset<MAX> isPrime;
vector<int> primes;
void genPrimes()
{
	isPrime.set();
	isPrime[0] = isPrime[1] = false;
    for(ll i=2;i*i<=MAX;i++)
    {
    	if(isPrime[i]){
    		for(ll j=i;j*i<=MAX;j++){
    			isPrime[j*i] = false;         //marking all the multiples as false
    		}
    	}
    }
    primes.push_back(2);
    for(int i=3;i<=MAX;i+=2){
    	if(isPrime[i])primes.push_back(i);
    }
}

int main(){
    genPrimes();
    for(int i=0;i<100;i++){
        cout<<primes[i]<<" ";
    }
}
