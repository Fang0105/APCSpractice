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
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		map<int,int>mp;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			mp[a]++;
		}
		vector<int>ve;
		for(pair<int,int>p : mp){
			ve.push_back(p.second);
		}
		sort(ve.begin(),ve.end());
		vector<int>sum;
		int tot = 0;
		sum.push_back(0);
		for(int i:ve){
			tot+=i;
			sum.push_back(tot);
		}
		//
//		for(int i:ve){
//			cout<<i<<" ";
//		}
//		cout<<endl;
//		for(int i:sum){
//			cout<<i<<" ";
//		}
//		cout<<endl;
		//
		int mn = MAX;
		for(int i=0;i<ve.size();i++){
			int x = ve[i];
			int loc = lower_bound(ve.begin(),ve.end(),x)-ve.begin();
			//cout<<loc<<" ";
			int tem = 0;
			tem += sum[loc];
			tem += sum[sum.size()-1]-sum[loc]-(x*(sum.size()-1-loc));
			mn = min(mn,tem);
			//cout<<mn<<endl;
		}
		cout<<mn<<endl;
	}


	return 0;
}
/*
1
8
1 2 3 3 3 2 6 6
*/
