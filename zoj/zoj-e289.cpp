#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int cnt = 0;
	unordered_map<string,int> mp;
	string arr[m];
	for(int i=0;i<m;i++){
		string str;
		cin>>str;
		arr[i] = str;
		if(i<n-1){
			mp[str]++;
		}else{
			mp[str]++;
			if(mp.size()==n){
				cnt++;
			}
			if(mp[arr[i-n+1]]==1){
				mp.erase(arr[i-n+1]);
			}else{
				mp[arr[i-n+1]]--;
			}
		}
	}
	cout<<cnt<<endl;
	
	
	return 0;
}

