#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countSmallerThanEqualToMid(vector<int> &row,int mid)
{
	int l =0,h = row.size() -1;
	while(l<=h)
	{
		int md = (l + h) >>1;
        //>mid
		if(row[md] <= mid){
			l = md + 1;
		}
		else{
			h = md -1;
		}
	}
	return l;
}


int findMedian(vector<vector<int>> &A)
{
	int low =1;
	int high = 1e9;
	int n = A.size();     //row size
	int m = A[0].size();  //col size
	while(low<=high)
	{
		int mid = (low+high) >>1;
		int cnt = 0; //<=mid
		for(int i =0;i<n;i++)
		{
			cnt += countSmallerThanEqualToMid(A[i],mid);
		}
		if(cnt<=(n*m)/2) low = mid +1;
		else high = mid -1;
	}
	return low;
}

int main()
{
	vector<vector<int>> A = {{1,3,5},{2,6,9},{3,6,9}};
	cout<<findMedian(A);
	return 0;
}