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
	vector<int>ve;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		ve.push_back(i+1);
	}
	set<int>se;
	for(int i=1;i<=m;i++){
		int a;
		cin>>a;
		if(se.count(a)==true){
			cout<<"0u0 ...... ?"<<endl;
			continue;
		}
		//a = i;
		auto it = lower_bound(ve.begin(),ve.end(),a);
		int pos = it-ve.begin();
		//cout<<pos<<endl;
		if(pos==ve.size()){
			cout<<"0u0 ...... ?"<<endl;
		}else{
			if(ve[pos]!=a){
				cout<<"0u0 ...... ?"<<endl;
			}else{
				if(pos+1==ve.size()){
					cout<<"0u0 ...... ?"<<endl;
				}else{
					cout<<ve[pos+1]<<endl;
					se.insert(ve[pos+1]);
					ve.erase(ve.begin()+pos+1);
				}
			}
		}
		
	}



	return 0;
}



