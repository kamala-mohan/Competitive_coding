// #include <bits/stdc++.h>
// using namespace std;
// int main() 
//    {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	  int n;
// 	  cin>>n;
//       int count=0;
//       while(n)
//       {
//         int r=0;
//         for(int i=0;i<100;i++)
//         {
//           int r=pow(2,i);
//         if(r>n)
//         {
//         n=n-pow(2,i-1);
//         count++;
//         break;
//         }
//     }
// }
// cout<<count<<endl;}

// 	return 0;
// }
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int count =0;
    while(n){
      
      int r=0;
      for(int i=0;i<n;i++){
        int r= pow(2,i);
        if(r>n){
        n=n-pow(2,i-1);
        count ++;
        break;

      }
    }
  }
  cout<<count<<endl;}
  return 0;
}