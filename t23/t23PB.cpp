#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
struct VT{
	int l;
	int h;
};
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	VT vt[n];
	for(int i=0;i<n;i++){
		cin>>vt[i].l;
	}
	for(int i=0;i<n;i++){
		cin>>vt[i].h;
	}
	int cnt = 0;
	int now = vt[0].h+vt[0].l;
	int p = 0;
	while(p<n&&vt[p].l<=now){
		cnt++;
		now = max(now,vt[p].l+vt[p].h);
		p++;
	}
	cout<<cnt<<endl;


	return 0;
}



