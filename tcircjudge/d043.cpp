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
	cin>>n;
	vector<int>en;
	vector<int>me;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		en.push_back(a);
	}
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		me.push_back(a);
	}
	sort(en.begin(),en.end());
	sort(me.begin(),me.end());
	int tot = 0;
	int id = 0;
	for(int i:en) {
		while(id<n) {
			if(me[id]<=i) {
				id++;
			}else {
				tot++;
				id++;
				break;
			}
		}
	}
	cout<<tot<<endl;


	return 0;
}



