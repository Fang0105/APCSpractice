#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
vector<int>ve[1000];
map<pair<int,int>,int >m;
int mx = 0;
int vis[1000] = {0};
void dfs(int n,int sum){
	int tem = sum;
	for(auto i:ve[n]){
		tem = sum;
		if(vis[i]==0){
			vis[i] = 1;
			tem+=m[{n,i}];
			mx = max(mx,tem);
			dfs(i,tem);
			vis[i] = 0;
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	char startc;
	cin>>startc;
	int start = (int)startc;
	int n;
	cin>>n;
	set<pair<int,int> >se;
	for(int i=0;i<n;i++){
		char c1,c2;
		int a;
		cin>>c1>>c2>>a;
		if(se.count(make_pair((int)c1,(int)c2))==false){
			se.insert(make_pair((int)c1,(int)c2));
			ve[(int)c1].push_back((int)c2);
			m[make_pair((int)c1,(int)c2)] = m[make_pair((int)c2,(int)c1)] = a;
		}else{
			m[make_pair((int)c1,(int)c2)] = m[make_pair((int)c2,(int)c1)] = max(a,m[{(int)c1,(int)c2}]);
		}
	}
	dfs(start,0);
	cout<<mx<<endl;






	return 0;
}

