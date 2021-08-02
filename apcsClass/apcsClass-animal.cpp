#include<bits/stdc++.h>
#define int long long
using namespace std;

struct Animal{
	string name;
	int num;
	string loc;
};

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	vector<string>ve;
	Animal a[n];
	set<string>s;
	for(int i=0;i<n;i++){
		Animal animal;
		string loc;
		cin>>animal.name>>animal.num>>loc;
		a[i].name = animal.name;
		a[i].num = animal.num;
		a[i].loc = loc;
		if(!s.count(loc)){
			s.insert(loc);
			ve.push_back(loc);
		}
	}
	for(int i=0;i<ve.size();i++){
		cout<<ve[i]<<":";
		vector<pair<string,int> >v;
		for(int j=0;j<n;j++){
			if(a[j].loc==ve[i]){
				bool b = true;
				for(int k=0;k<v.size();k++){
					if(v[k].first==a[j].name){
						v[k].second+=a[j].num;
						b = false;
					}
				}
				if(b){
					v.push_back(make_pair(a[j].name,a[j].num));
				}
			}
		}
		for(int j=0;j<v.size();j++){
			if(j!=0){
				cout<<","<<v[j].first<<" "<<v[j].second;
			}else{
				cout<<v[j].first<<" "<<v[j].second;
			}
		}
		cout<<endl;
	}






	return 0;
}

