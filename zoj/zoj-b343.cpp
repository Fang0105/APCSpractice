#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int h;
	cin>>h;
	while(h--){
		int n,m,l;
		cin>>n>>m>>l;
		bool dominos[n+1];
		memset(dominos,false,sizeof(dominos));
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			for(int i=a;i<b;i++){
				dominos[i] = true;
			}
		}
		bool fallen[n+1];
		memset(fallen,false,sizeof(fallen));
		int cnt = 0;
		for(int i=0;i<l;i++){
			int k;
			cin>>k;
			if(fallen[k]==false){
				fallen[k] = true;
				cnt++;
				k++;
				while(k<=n&&dominos[k-1]==true&&fallen[k]==false){
					cnt++;
					fallen[k] = true;
					k++;
				}
			}
		}
		cout<<cnt<<endl;
	}



	return 0;
}



