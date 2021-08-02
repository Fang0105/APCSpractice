#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--){
		int k;
		cin>>k;
		multiset<int>se;
		for(int i=0;i<k;i++){
			int a;
			cin>>a;
			se.insert(a);
		}
		int mn = *se.begin();
		cout<<k-se.count(mn)<<endl;
	}



	return 0;
}



