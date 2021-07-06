#include<iostream>
using namespace std;

int isPrimeNumber(int n){
     bool isPrime =true;
     for (int i =2;i*i<=n;i++){
          if(n%i==0){
               isPrime = false;
               break;
          }
          
     }
     return isPrime;

}

int main(){
     int k;
     cin>>k;
     
     bool isPrime;
     for(int n=2;n<k;n++){
          isPrime = isPrimeNumber(n);
     
    
     if(isPrime == true)
     	cout<<n<<" ";
     }
	return 0;
}


