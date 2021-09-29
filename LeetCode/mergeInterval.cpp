#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
 
    vector<vector<int>> res;
	sort(intervals.begin(),intervals.end());
 
	int start = intervals[0][0];
    int end = intervals[0][1];
 
	int j = 0;
	for(int i=1;i<intervals.size();i++){
		if(end<intervals[i][0]){
			    res.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
		else{
			end = max(end, intervals[i][1]);
		}
	}
	
 
    
}
 
int main(){
	vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{9,11},{15,13}}; 
	vector<vector<int>> ans = merge(intervals);
	for(int i = 0;i<ans.size();i++){
		for(int j=0;j<ans.size();j++){
			cout<<ans[i][j]<<" ";

		}
		
	}

}