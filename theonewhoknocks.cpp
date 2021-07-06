#include<iostream>
using namespace std;
int door(int x,int y){
	
	if(x>y){
		if((x-y)%2==0){
			return 1;
		}else{
			return 2;
		}
	}
	else if(x<y){
		if((x-y)%2!=0){
			return 1;
		}else if((x-y)%2==0 && (x-y)%4!=0){
			return 2;
		}else{
			return 3;
		}
	}
	else{
		return 0;
	}
	

}
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int x,y;
		cin>>x>>y;
		cout<<door(x,y)<<endl;

	}

	return 0;
}