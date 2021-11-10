#include<bits/stdc++.h>
using namespace std;


bool isAlloacte(int *arr,int barrier,int n,int k)
{
	int pages = 0,student = 1;
	for(int i =0;i<n;i++)
	{
		
        if(barrier<arr[i]) return false;
        if(pages + arr[i] > barrier)
        {
        	student++;
        	pages += arr[i];
        }
        else
        {
        	pages+=arr[i];
        }
	}
	if(student>k) return false;
	return true;
 
}
int maxPage(int *arr,int n,int b)
{
	int low = INT_MAX,high = 0,res = -1 ;
	for(int i =0;i<n;i++){
		low = min(arr[i],low);
		high += arr[i];
	}
	while(low<=high)
	{
		int mid = (low+high) >>1;
		if(isAlloacte(arr,mid,n,b))
		{
			res = mid;
			high = mid-1;
		}
		else
		{
			low = mid+1;
		}

	}
	return low;
}

int main()
{
	int arr[] = {12,34,67,90};
	int n =4;
	int b = 2;
	cout<<maxPage(arr,n,b);
	return 0;

}