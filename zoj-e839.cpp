#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
vector<pair<string,string> >p;
string g;
bool comp(pair<string,string>p1,pair<string,string>p2){
	if(p1.second==g){
		if(p2.second==g){
			if(p1.first<p2.first){
				return true;
			}else{
				return false;
			}
		}else{
			return true;
		}
	}else{
		if(p2.second==g){
			return false;
		}else{
			return true;
		}
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string a,b;
		cin>>a>>b;
		p.push_back(make_pair(a,b));
	}
	cin>>g;
	sort(p.begin(),p.end());
	bool bb = true;
	for(int i=0;i<n;i++){
		if(p[i].second==g){
			bb = false;
			cout<<p[i].first<<endl;
		}
	}
	if(bb){
		cout<<"No"<<endl;
	}

	return 0;
}



