#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
// 	int n;
// 	cin>>n;
// 	string s =to_string(n);
// 	cout<<s<<endl;
// 	sort(s.begin(),s.end(), greater<int>()); // to sort in decending order
// 	cout<<s<<endl;
// 	return 0;
// }
    string n;
    cin>>n;
    int arr[26];
    for(int i=0;i<26;i++)
    	arr[i]=0;
    for(int i=0;i<n.size();i++)
    	arr[n[i]-'a']++;

    char ans='a';
    int maxF=0;
    for(int i=0;i<26;i++)
    {
    	if(arr[i]>maxF){
    		maxF = arr[i];
    		ans = i +'a';
    		cout<<i<<endl;
    	}
    }
   
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}
