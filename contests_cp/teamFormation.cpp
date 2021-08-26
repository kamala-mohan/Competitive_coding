#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    string s,t;
	    cin>>s>>t;
	    int prog = 0 , eng = 0,both = 0,rem = 0,ans = 0,minn;
	    for(int i=0;i<n;i++){
		    if(s[i] == '1' and t[i] == '1')both++;
		    else if(s[i] == '1')prog++;
		    else if(t[i] == '1')eng++;
		    else rem++;
	    }
	

	minn = min(prog,eng);
	prog -= minn; eng -=minn;
	ans+=minn;
	cout<<ans<<" ";


	minn = min(both,rem+prog+eng);
	ans += minn;
	both -= minn;
	cout<<ans<<" "; 

	ans+= both/2;
	cout<<ans<<'\n';
    }
    return 0;
}
