#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

struct Player{
	string name;
	vector<int>ve;
};

bool comp(Player p1,Player p2){
	for(int i=0;i<min(p1.ve.size(),p2.ve.size());i++){
		if(p1.ve[i]!=p2.ve[i]){
			return p1.ve[i]>p2.ve[i];
		}
	}
	return p1.ve.size()>p2.ve.size();
}

bool isequal(vector<int>v1,vector<int>v2){
	if(v1.size()!=v2.size()){
		return false;
	}else{
		for(int i=0;i<v1.size();i++){
			if(v1[i]!=v2[i]){
				return false;
			}
		}
	}
	return true;
}

bool comp2(int a,int b){
	return a>b;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	Player player[n];
	for(int i=0;i<n;i++){
		string name;
		int p;
		cin>>name>>p;
		player[i].name = name;
		while(p--){
			int a;
			cin>>a;
			player[i].ve.push_back(a);
		}
		sort(player[i].ve.begin(),player[i].ve.end(),comp2);
	}
	sort(player,player+n,comp);
	map<string,int>mp;
	int rank = 1;
	mp[player[0].name] = rank;
	for(int i=1;i<n;i++){
		if(isequal(player[i].ve,player[i-1].ve)){
			mp[player[i].name] = rank;
		}else{
			mp[player[i].name] = ++rank;
		}
	}
	string name;
	while(cin>>name){
		cout<<mp[name]<<endl;
	}

	return 0;
}
