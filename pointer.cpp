#include <iostream>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
    // int x=10;
    // int *var = &x;
    // cout<<var<<" "<<&x;
    // to create in heap memory.
    // int *ptr = new int;
    // cout<<ptr<<endl;
    //1st way of assigning value
    // *ptr = 11;
    // cout<<*ptr<<endl;

    // 2nd way of assigning value
    float *fptr = new float(4.5);
    cout<<*fptr<<endl;
    cout<<fptr<<endl;


    // to delete the pointer from the memory
    delete fptr;
    cout<<fptr;
   


	return 0;
}