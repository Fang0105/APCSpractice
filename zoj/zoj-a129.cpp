#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

struct Edge{
	int a,b;
	int val;
};
bool comp(Edge e1,Edge e2){
	return e1.val<=e2.val;
}
struct CMP{
	bool operator()(Edge e1,Edge e2){
		return e1.val<=e2.val;
	}
};
int find_root(int arr[],int x){
	if(arr[x]==x){
		return x;
	}
	return arr[x] = find_root(arr,arr[x]);
}
void con(int arr[],int x,int y){
	int root_x = find_root(arr,x);
	int root_y = find_root(arr,y);
	arr[root_x] = root_y;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int vertex,edge;
	while(cin>>vertex>>edge){
		//vector<Edge>ve;
		set<Edge,CMP>se;
		int dj[vertex];
		for(int i=0;i<vertex;i++){
			dj[i] = i;
		}
		for(int i=0;i<edge;i++){
			Edge e;
			cin>>e.a>>e.b>>e.val;
			//ve.push_back(e);
			se.insert(e);
		
		}
		//sort(ve.begin(),ve.end(),comp);
		vector<Edge>vis;
		int len = 0;
		while(vis.size()!=vertex-1&&se.size()!=0){
			Edge tmp = *se.begin();
			se.erase(se.begin());
			if(find_root(dj,tmp.a)!=find_root(dj,tmp.b)){
				vis.push_back(tmp);
				con(dj,tmp.a,tmp.b);
				len+=tmp.val;
			}
		}
		cout<<(vis.size()==vertex-1?len:-1)<<endl;
	}



	return 0;
}



