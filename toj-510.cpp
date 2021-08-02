#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int card[n+1];
	for(int i=1;i<=n;i++){
		cin>>card[i];
	}
	int tem[n+1];
	for(int i=1;i<=n;i++){
		cin>>tem[i];
	}
	vector<int>ve[n+1];
	int k = tem[1];
	//set<int>se;
	int cnt = 1;
	bool vis[n+1] = {false};
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			vis[i] = true;
			int k = tem[i];
			while(vis[k]==false){
				vis[k] = true;
				ve[cnt].push_back(k);
				k = tem[k];
			}
			ve[cnt].push_back(k);
			cnt++;
		}
	} 
//	for(int i=1;i<=cnt;i++){
//		for(int j:ve[i]){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
	int t;
	cin>>t;
//	find(ve.begin(),ve.end(),值) == ve.end() => 不存在 
//								   != ve.end() =>  存在
	//find(ve.begin(),ve.end(),值) - ve.brgin() => 獲得索引值 
	int ans[n+1];
	for(int i=1;i<=n;i++){
		int ca = card[i];
		int ch,idx;
		for(int q=1;q<=cnt;q++){
			if(find(ve[q].begin(),ve[q].end(),ca)!=ve[q].end()){
				ch = q;
				idx = find(ve[q].begin(),ve[q].end(),ca) - ve[q].begin();
				break;
			}
		}
		int l = ve[ch].size();
		int tra = t;
		tra = t%l;
		tra = (idx+tra)%l;
		int f = ve[ch][tra];
		ans[f] = i;
	}
	for(int i=1;i<=n;i++){
		if(i!=1){
			cout<<" ";
		}
		cout<<ans[i];
	}
	cout<<endl;




	return 0;
}

