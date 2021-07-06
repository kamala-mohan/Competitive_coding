#include<iostream>
using namespace std;

int Triplet(int a[],int n,int S){

	for(int j=0;j<n;j++){
		
		int lo = j+1;
		
		int hi =n-1;
		cout<<a[j]<<endl<<a[lo]<<endl<<a[hi]<<endl<<a[j]+a[lo]+a[hi]<<endl;
	    while(lo<hi){


		if(a[j]+a[lo]+a[hi] == S){
			
			cout<<"found";
			return 1;
		}else if(a[j]+a[lo]+a[hi]<S){

			cout<<lo++<<endl;

		}else{
			hi--;
		}
	}

	}

	cout<<"not found";
}



int main(){
	int n;
	cin>>n;
	int S;
	cin>>S;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int result = Triplet(a,n,S);
    


	return 0;
}