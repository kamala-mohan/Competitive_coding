#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class Stack{
	int top;
public:
	int a[MAX]; //maximum size of stack

	//default constructor
	Stack() {top = -1;}
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x)
{
	if(top >= (MAX-1)){
		cout<<"Stack overflow";
		return false;
	}
	else
	{
		a[++top] = x;
		cout<<x<<" is pushed onto the stack"<<endl;
		return true;
	}
}

int Stack::pop()
{
	if(top <0){
		cout<<"Stack underflow";
		return 0;
	}
	else{
		int x = a[top--];
		return x;
	}
}

int Stack::peek()
{
	if(top<0)
	{
		cout<<"Stack is empty";
		return 0;
	}
	else
	{
		int x = a[top];
		return x;
	}
}
bool Stack::isEmpty()
{
	return (top<0);
}

int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.pop()<<" Popped from the stack"<<endl;

	cout<<"Elements of the stack are:";
	while(!s.isEmpty()){
		//prints the top element
		cout<<s.peek()<<" ";

		//removes the top element
		s.pop();
	}
	return 0;

}
