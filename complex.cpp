#include<iostream>
using namespace std;

struct Complex
{
	Complex(int r,int i){
		real =r;
		img=i;
	}
	int real,img;

	Complex add(Complex b){
		Complex c=Complex(0,0);
		c.real=real+b.real;
		c.img=img+b.img;
		return c;
	}
	Complex mul(Complex b){
		Complex c = Complex(0,0);
		c.real=real*b.real-img*b.img;
		c.img=real*b.img+img*b.real;
		return c;
	}
	void display();//declaration

	
};
//definition
void Complex::display(){
	cout<<real<<" + i "<<img;
}


int main(){
// #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
// #endif
    Complex a=Complex(2,3);
    Complex b=Complex(4,1);
    Complex c =a.mul(b);
    a.display();



	return 0;
}