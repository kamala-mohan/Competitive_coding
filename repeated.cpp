 #include <iostream>
using namespace std;

int repeatedElement(int *arr,int n){
	for(int i=0;i<n;i++){
		if(arr[abs(arr[i]) - 1]<0) return i;
		arr[abs(arr[i]) -1] *= -1;
	}
	return -1; 
}


int main(){
    int n;
    cin>>n;
    int *arr=new int[n]; 
    for(int i=0;i<n;i++){
    	cin>>arr[i];
    }
    int result = repeatedElement(arr,n);
    if(result==-1){
    	cout<<"no repeatition";
    }else{
    	cout<<arr[result];
    }


	return 0;
}