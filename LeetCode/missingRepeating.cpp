#include<iostream>
#include<vector>
using namespace std;

vector<int> repeatedMissing(const vector<int> &v){
	long long int len = v.size();
	long long int sum_n = (len*(len+1))/2;
	long long int sq_sum = (len*(len+1)*(2*len+1))/6;
	long long int missing =0 ,repeating =0;

	for(int i=0;i<v.size();i++){
		sum_n -= (long long int)v[i];
		sq_sum -=(long long int)v[i]*(long long int)v[i];
	}
    missing = (sum_n + sq_sum/sum_n)/2;
    repeating = missing - sum_n;
    vector<int> ans;
    ans.push_back(repeating);
    ans.push_back(missing);
    return ans;

}
int main(){
	vector<int> v ={4,3,6,2,1,6,7};
	vector<int> res = repeatedMissing(v);
	for(int x : res){
		cout<<x<<" ";
	}
}