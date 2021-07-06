#include<iostream>
#include<memory>
using namespace std;
struct Point
{
	Point(int x1){
		x=x1;
	}
	int x;
	
};
void wow(string str){
	cout<<"wow!!! "<<str<<endl;

}
void happy(void (*ptr)(string)){
    ptr("kamala");
	cout<<"happy " <<endl;
	//unique pointers!!
	// unique_ptr<Point> p1(new Point(10));
	// cout<<p1->x<<endl;

	//special pointers!!
	shared_ptr<Point> p1(new Point(11));
	shared_ptr<Point> p2;
	p2=p1;
	cout<<p1->x<<endl;
	cout<<p2->x<<endl;
	cout<<p1.use_count();

}

	





int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	//to declare fxn pointer
	// void (*ptr)(string)=]wow;
	// (*ptr)("kamala");
// 
	//fxn pointer for more than one fxn
	// void(*ptr[])(string)={wow,happy};
	// (*ptr[0])("kamala");
	// (*ptr[1])("life");



	//passing fxs inside fns using fxn pointers
	happy(wow);

    //unique pointerts
	
	return 0;
}