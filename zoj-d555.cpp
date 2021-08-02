#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
struct Node{
	int x,y;
};
bool comp(Node a,Node b){
	if(a.x==b.x){
		return a.y<b.y;
	}else{
		return a.x<b.x;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	int cnt = 1;
	while(cin>>n){
		vector<Node>ve;
		for(int i=0;i<n;i++){
			Node node;
			cin>>node.x>>node.y;
			ve.push_back(node);
		}
		sort(ve.begin(),ve.end(),comp);
		stack<Node>st;
		int mx = ve[ve.size()-1].y;
		st.push(ve[ve.size()-1]);
		for(int i=ve.size()-1;i>=0;i--){
			if(ve[i].y>mx){
				st.push(ve[i]);
				mx = ve[i].y;
			}
		}
		cout<<"Case "<<cnt++<<":"<<endl;
		cout<<"Dominate Point: "<<st.size()<<endl;
		while(st.size()!=0){
			cout<<"("<<st.top().x<<","<<st.top().y<<")"<<endl;
			st.pop();
		}
	}
	





	return 0;
}

