#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		int arr[n];
		int tot = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			tot += arr[i];
		}
		int mx = MIN;
		vector<int>ve[n];
		for(int i=1;i<n;i++){
			int a;
			cin>>a;
			ve[i].push_back(a);
			ve[a].push_back(i); 
		}
		for(int i=0;i<n;i++){
			//cout<<"--------------------"<<endl<<i<<" : "<<endl;
			int cnt = 0;
			//out -> in && in -> out
			cnt += 2*(arr[i]*(tot-arr[i]));
			//cout<<cnt<<endl;
			//in -> in
			cnt += arr[i]*(arr[i]-1);
			//cout<<cnt<<endl;
			//out -> out
			if(ve[i].size()>=2){
				for(int j:ve[i]){
					cnt += arr[j]*(tot-arr[i]-arr[j]);
				}
			}
			//cout<<cnt<<endl;
			mx = max(mx,cnt);
		}
		cout<<mx<<endl;
	}



	return 0;
}



