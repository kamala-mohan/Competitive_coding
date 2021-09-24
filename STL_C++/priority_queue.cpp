#include <bits/stdc++.h>
using namespace std;

int main(){
	// priority_queue<int> pq;  //max heap ds, tc-> log n
	// pq.push(1);
	// pq.push(2);    //stores ele in desending order
	// pq.push(5);
	// pq.push(3);
	// pq.push(5);
	// while(!pq.empty()){
	// 	cout<<pq.top()<<endl;
	// 	pq.pop();
	// }
	//pq.top(),pq.pop(),pq.size(),pq.empty()



	//min heap ds
	priority_queue<int,vector<int>,greater <int> >pq;   //tc->log n
	pq.push(1);
	pq.push(2);    //stores ele in asending order
	pq.push(5);
	pq.push(3);
	pq.push(5);
	while(!pq.empty()){
		cout<<pq.top()<<endl;
		pq.pop();
	}


}