#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

struct CMP{
	bool operator()(pair<int,int>p1,pair<int,int>p2){
		return p1.second>p2.second;
	}
};

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int w,r = 1;
    cin>>w;
    while(w--){
        int n,m,s,t;
        cin>>n>>m>>s>>t;
        vector<int>ve[n];
        map<pair<int,int>,int>mp;
        int dis[n];
        for(int i=0;i<m;i++){
        	int a,b,val;
        	cin>>a>>b>>val;
			ve[a].push_back(b);
	        ve[b].push_back(a);
	        mp[make_pair(a,b)] = val;
	        mp[make_pair(b,a)] = val;
		}
		set<int>bn;
		priority_queue<pair<int,int>,vector<pair<int,int>>,CMP>pq;
		for(int i=0;i<n;i++){
			if(i==s){
				dis[s] = 0;
				pq.push(make_pair(s,0));
			}else{
				dis[i] = MAX;
				pq.push(make_pair(i,MAX));
			}
		}
		while(pq.size()!=0){
			pair<int,int>tp = pq.top();
			pq.pop();
			if(bn.count(tp.first)==true){
				continue;
			}
			if(tp.second==MAX){
				break;
			}
			bn.insert(tp.first);
			dis[tp.first] = tp.second;
			for(int i:ve[tp.first]){
				if(bn.count(i)==false){
					dis[i] = min(dis[tp.first]+mp[make_pair(tp.first,i)],dis[i]);
					pq.push(make_pair(i,dis[i]));	
				}
			}
		}
		cout<<"Case #"<<r++<<": ";
		if(bn.count(t)==false){
			cout<<"unreachable"<<endl;
		}else{
			cout<<dis[t]<<endl;
		}
    }



    return 0;
}
