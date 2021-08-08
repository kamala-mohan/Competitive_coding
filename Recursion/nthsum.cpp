#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
int prod = 1;
int mul(int n,int a,int r,int x)
{
  if(prod == n)
  {
    cout<<(prod*r);
    return 0;
  }
  prod = (a*r^x);
  mul(n,a,r,x+1);
}
  
  int main()
  {
    int n,a,r;
    cin>>n>>a>>r;
    int x = 1;
    mul(n,a,r,x);
    return 0;
  }
  
  

