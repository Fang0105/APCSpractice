#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		vector<int>ve[n+5];
		for(int i=0;i<m;i++){
			int a,b;
			cin>>a>>b;
			ve[a].push_back(b);
		}
		int start,end;
		cin>>start>>end;
		queue<int>qu;
		for(int i:ve[start]){
			qu.push(i);
		}
		bool reach = false;
		while(true){
			if(qu.empty()){
				break;
			}else if(qu.front()==end){
				reach = true;
				break;
			}else{
				for(int i:ve[qu.front()]){
					qu.push(i);
				}
				qu.pop();
			}
		}
		if(reach){
			cout<<"Yes!!!"<<endl;
		}else{
			cout<<"No!!!"<<endl;
		}
	}






	return 0;
}

