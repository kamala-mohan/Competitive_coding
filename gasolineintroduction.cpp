// #include<iostream>
// using namespace std;

// int distance(int arr[],int n){
// 	int petrol=arr[0];
// 	int count=0,distance1=0;
// 	for(int i=0;i<n;i++){
// 		petrol=(petrol-1+arr[i]);
// 		cout<<petrol<<" "
// 		count++;
// 	}
// 	distance1=petrol+count;
// 	cout<<distance1;

// }

// int main(){
// 	int t;
// 	cin>>t;
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	while(t--){
// 		for(int i=0;i<n;i++)
// 			cin>>arr[i];
// 	}
// 	distance(arr,n);
// 	return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         long long int s = 0;
//         int a[n];
//         long long int ans = 0;
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         for (int i = 0; i < n; i++)
//         {
//             s = s + a[i];
//             ans = ans + a[i];
//             if (s == 0)
//                 break;
//             s--;
//         }
//         cout << ans << endl;
//     }
// }
#include<iostream>
using namespace std;
 
int distance(int arr[],int n){
	int petrol=arr[0];
	int count=0,distance1=0;
	for(int i=1;i<n;i++){
	    if(petrol<=0) break;
		petrol=((petrol-1)+arr[i]);
		count++;
	}
	distance1=petrol+count;
	cout<<distance1<<endl;
	return 0;
}
 
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	    cin>>n;
	    int arr[101];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		distance(arr,n);
	}
 
	return 0;
}