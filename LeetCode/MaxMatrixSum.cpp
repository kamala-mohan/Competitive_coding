#include<iostream>
#include<vector>
using namespace std;

int matrixSum(vector<vector<int> > &a,int n,int m){
	long long ans = 0 , neg_cnt = 0 , minn = 1000000;
	for(int i = 0;i<n;i++){
		for(int j = 0;j< m;j++){
			ans += abs(a[i][j]);
			if(a[i][j]<0)
				neg_cnt++;
			minn = minn < abs(a[i][j])?minn : abs(a[i][j]);
		}
	}
	return (neg_cnt % 2 == 0)? ans : ans - 2*minn;
}

int main(){

	int n,m ;
	cin>>n>>m;
    vector<vector<int> > a;
    int val;
    for(int i = 0; i < n ; i++)
    {
        vector<int> temp;
        for(int j = 0; j < m; j++)
        {

            cin >> val;
            temp.push_back(val);
        }
    
        a.push_back(temp);
        temp.clear();
    }

    cout<<matrixSum(a,n,m);
}
    

