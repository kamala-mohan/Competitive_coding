#include<iostream>
#include<vector>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	// // int n;
	// // cin>>n;
	// // vector<int> v={1,2,3};
	// // vector<int> v1={2,1,3};
	// // if(v==v1)
	// // 	cout<<"yes";
	// // else
	// // 	cout<<" no";
	// vector<int> v={1,2,3,4,5};
	// cout<<v.size()<<" "<<v.capacity()<<'\n';
    
 //    vector<int> v2;

	
	// v2.push_back(1);
	// v2.push_back(2);
	// v2.push_back(3);
	// v2.push_back(4);
 //    v2.push_back(5);
 //    v2[5] = 10;
	// cout<<v2.size()<<" "<<v2.capacity()<<endl;
 //    cout<<(v==v2)<<'\n'; 
   
	// // for(int i=0;i<v.size();i++)
	// // 	// cout<<v[i]<<" ";
	
	
	// // v[7] = 8;

	// // for(int i=0;i<v.capacity();i++)
	// // 	cout<<v[i]<<" ";



//v.begin->points tu the element
	//v.end->points to the address just next to the last ele
	//v.end -1 -> last ele
	//v.end()-> v.begin() + n;
	// vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	// vector <int> v1(v.begin()+1 , v.begin()+5);  //end leaves the last ele like split in python
	// for( int i : v1)
	// 	cout<<i<< " ";

	//resize
	vector<int> tmp={1,2,3,4,5,6};
	tmp.resize(10);
	for(int i:tmp)
		cout<<i<<" ";
	tmp.assign(12,5);
	for(int i:tmp)
		cout<<i<<" ";



	return 0;
}