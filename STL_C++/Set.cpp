//stores everything in sorted order
//stores unique elements
//cannot be accessed by index
//can only be accessed by iterators
//red black tree is implemented on back of set

//set ele are stored contigous memeory loc
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
	// set<int> s;
 //    s.insert(1);  //O(log n)
 //    s.insert(5);
 //    s.insert(5);
 //    cout<<s.size();

     //s[0] this is not accepted


    //iteartor -> pointer pointing to the address
    // set<int>::iterator it = s.begin();
    // cout<<*it; 
    

    //instead of a this big word,usually used in CP
    // auto it = s.begin();
    // for(auto it=s.begin();it!=s.end();it++)
    // 	cout<<*it<<endl;

    // for(int i:s){           //range based loop
    // 	cout<<i;
    // }
 

    set<int> raj;
    for(int i=0;i<10;i++){
    	raj.insert(i);
    }
    for(auto i:raj){
    	cout<<i<<" "<<endl;
    }
    //find fxn returns an iteartor 
    auto it = raj.find(11);
    if(it == raj.end()) cout<<"not exist";

    // auto it  = raj.find(3);   //O(log n)
    // auto t = raj.find(7);
    // cout<<*it;

     //erase

    // s.erase(3);  //ele erase  //delete the 3 in set in log n time
    // raj.erase(it);   //iterator erase

     //to erase multiple ele   //range erase tc->range * logn
    // raj.erase(it,t);       //first ele inclusive [ , and the last ele is exclusive )

    for(auto i:raj){
    	cout<<i<<" ";
    }
    


    //unoredered set
    //stores unique ele
    //O(1) in almost all cases
    //O(n) is the worst case which happens very few times
    //replica of set,only it does not store ele in sorted order
    unordered_set<int> st;
    st.insert(2);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    for(auto it:st) cout<<it<<endl;


   //i want to store all elements and in sorted order with log n functionality
   multiset<int> ms;
   ms.insert(1);
   ms.insert(2);
   ms.insert(1);
   ms.insert(5);
   ms.insert(3);
   ms.insert(3);
   for(auto it:ms){
   	cout<<it<<" "<<endl;
   }
   // int cnt = ms.count(3); // gives the count
   // ms.erase(3);
   // auto it = ms.find(3);  //since there are multiple 3s it always points the first 3

   // //empty fxn
   // if(ms.empty() == true)

   	//to delete only one occurence of an ele
   	ms.erase(ms.find(3),ms.end());   
   	for(auto it:ms){
   	cout<<it<<" ";
   }

}
