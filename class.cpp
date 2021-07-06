#include<iostream>
using namespace std;
class Employee{
public:
	string name;
private:
	int salary;
	int empcode;
public:
	Employee(int s){
		name = "";
		salary =s;
		empcode=-1;
	}
	//copy constructor
	Employee(const Employee &e){
		cout<<"Called copy constructor";
	}
	//destructor
	~Employee(){
		cout<<"destructor called"<<" ";
	}
	void setSalary(int s){
		if(s<0) return ;
		salary =s;
		return;
	}
	int getSalary(){
		return salary;
	}
	int getEmpcode(){
		return empcode;
	}
};
int main(){
	Employee e(100),e3(100); 
	Employee e1=e;
	cout<<"end"<<endl;;
	// Employee e1(100);
	// cout<<e1.getEmpcode();
	// e1.name="kamala";
	// e1.setSalary(200);
	// cout<<e1.getSalary();
 //    string s="kamala";
 //    string s1 = s; //calls copy constructor
 //    string s2;
 //    s2 = s; //does not call copy constructor
	return 0; 
}