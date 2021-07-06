#include<iostream>
using namespace std;
//we are designing a custom vector
class custom_vec{
	int *a;
	int sz,cap;
public:
	custom_vec(){
		a= NULL,sz=0,cap=0;
	}
	void push_back(int num){
		if(sz+1<=cap)
		{
			a[sz] = num;
			sz++;
		}
		else{
			int *b;
			if(cap)

				b=new int[2*cap], cap *=2;
			     
			else
				b = new int[1],cap = 1;
			   
			for(int i=0;i<sz;i++)

				b[i] = a[i];
			delete[] a;

			a= b ;
			a[sz] = num;
			sz++;	
			
 		}
	}
	int size(){
		return sz ;
	}
	int capacity(){
		return cap;
	}
	void pop_back(){
		if(sz)
			sz--;
	}
	int & back(){
		return a[sz-1];
	}
	int operator[](int i){
		if(i>=0 and i<sz)
			return a[i];
		else
			return -1;
	}
};



int main(){

#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	custom_vec v;
	
	for(int i=0;i<10;i++){
		v.push_back(1);
		cout<<v.size()<<" "<<v.capacity()<<endl;
	}
	cout<<v[2];

	return 0;
}