//two sided queue
// this is similar to dequeue

//implemention is done using doubly linked list
#include <bits/stdc++.h>
using namespace std;

int main(){
	list<int> ls;
	l1.push_back(20);  //O(1)
	l1.push_front(10);
	l1.pop_back();    //O(1)
	l1.pop_front();


	list<int> l2(4,11);
	list<int> l3(l2.begin(),l2.end());  //copies the entire l2 to l3
	list<int> l4(l3);   //copies l3 to l4
	for(auto &el:l4){
		cout<<el<<endl;
	}
	
	//go thru fxns
	//erase fxn takes O(n)
	//a.merge(b) ->merges two list in a sorted fashion

}
