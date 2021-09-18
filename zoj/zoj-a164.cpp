#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
struct node{
	int s;
	int ls;
	int rs;
	int ms;
	int mxl;
	int mxr;
	int ll;
	int rr;
}arr[4*200005];
int a[200005];
node pull(node n1,node n2){
	node tmp;
	tmp.s = n1.s + n2.s;
	tmp.ls = max(n1.ls,n1.s+n2.ls);
	if(tmp.ls==n1.ls){
		tmp.ll = n1.ll;
	}else{
		tmp.ll = n2.ll;
	}
	tmp.rs = max(n2.rs,n2.s+n1.rs);
	if(tmp.rs==n2.s+n1.rs){
		tmp.rr = n1.rr;
	}else{
		tmp.rr = n2.rr;
	}
	tmp.ms = max({n1.ms,n2.ms,n1.rs+n2.ls});
	if(tmp.ms==n1.ms){
		tmp.mxl = n1.mxl;
		tmp.mxr = n1.mxr;
	}else if(tmp.ms==n1.rs+n2.ls){
		tmp.mxl = n1.rr;
		tmp.mxr = n2.ll;
	}else{
		tmp.mxl = n2.mxl;
		tmp.mxr = n2.mxr;
	}
	return tmp;
}
void build(int L,int R,int id){
	if(L==R){
		arr[id].s = a[L];
		arr[id].ls = a[L];
		arr[id].rs = a[L];
		arr[id].ms = a[L];
		arr[id].mxl = L;
		arr[id].mxr = L;
		arr[id].ll = L;
		arr[id].rr = L;
		return ;
	}
	int M = (L+R)/2;
	build(L,M,IL(id));
	build(M+1,R,IR(id));
	arr[id] = pull(arr[IL(id)],arr[IR(id)]);
}
node query(int l,int r,int L,int R,int id){
	if(l==L&&r==R){
		return arr[id];
	}
	int M = (L+R)/2;
	if(r<=M){
		return query(l,r,L,M,IL(id));
	}
	if(l>M){
		return query(l,r,M+1,R,IR(id));
	}
	return pull(query(l,M,L,M,IL(id)),query(M+1,r,M+1,R,IR(id)));
}
int n,m;
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int cnt = 1;
	while(cin>>n>>m){
		cout<<"Case "<<cnt++<<":"<<endl;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		build(0,n-1,0);
		for(int i=0;i<m;i++){
			int l,r;
			cin>>l>>r;
			l--;
			r--;
			node ans = query(l,r,0,n-1,0);
			cout<<ans.mxl+1<<" "<<ans.mxr+1<<" "<<ans.ms<<endl;
		}
	}



	return 0;
}



