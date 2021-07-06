#include <iostream>
#include<memory>
using namespace std;

struct  Point
{
	// Point(int x1,int a1,int z1){
	// 	x=x1;
	// 	a=a1;
	// 	z=z1;
	// } 
	// static int k;
	int x=0; 
	int a=0;
	int z=0;

	void sum(){
		cout<<x + a +z<<endl;
	}
};
// var=Point(2,3,4);
// int Point::k=0;
// var(1,2,3); variable declare and initialization

int main(){
// #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif

	Point p={1,2,3};
	// // can use without struct also
	
 //    struct Point p= Point{1,2,3};


	cout<<p.x<<p.a<<p.z<<endl;
	// cout<<p1.x<<p1.a<<p1.z<<endl;
	// // p1.sum();
	// cout<<var.x;
	// var.sum();
	// Point p;
	// cout<<p.k<<endl;
	// Point p1;
	// cout<<p1.k<<endl;
	// p.k+=1;
	// cout<<p1.k<<endl;
    

	return 0;
}