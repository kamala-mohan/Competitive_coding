#include<iostream>
using namespace std;
int main()
{


	int i,j,k;
	int val,rows;
	cout<<"enter the number of rows: ";
	cin>>rows;
	
	cout<<endl;
	for(i=0;i<rows;i++){
		val =1;
		for(j = 0;j<rows-1-i;j++){
			cout<<" ";
		}
		for(k = 0;k<=i;k++){
			cout<<" "<<val;
			
			val = val*(i-k)/(k+1);
		}
	cout<<endl<<endl;
	}
    return 0;
}