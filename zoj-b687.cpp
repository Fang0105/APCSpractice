#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,m,tot = 0;
int a[400020];
struct node{
	int min;
	int size;
}arr[100005];

node pull(node n1,node n2){
	node tmp;
	tmp.size = n1.size + n2.size;
	tmp.min = min(n1.min,n2.min);
	return tmp;
}

void build(int L,int R,int id){
	if(L==R){
		arr[id].size = 1;
		arr[id].min = a[L];
		return;
	}
	int M = (L+R)/2;
	build(L,M,IL(id));
	build(M+1,R,IR(id));
	arr[id] = pull(arr[IL(id)],arr[IR(id)]);
}

node query(int l,int r,int L,int R,int id){
	if(L==l&&R==r){
		return arr[id];
	}
	int mid = (L+R)/2;
	if(r<=mid){
		return query(l,r,L,mid,IL(id));
	}
	if(l>mid){
		return query(l,r,mid+1,R,IR(id));
	}
	return pull(query(l,mid,L,mid,IL(id)),query(mid+1,r,mid+1,R,IR(id)));
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	build(0,n-1,0);
//	for(int i=0;i<n;i++){
//		for(int j=i;j<n;j++){
//			int len = j-i+1;
//			if(m%len==0){
//				int h = m/len;
//				node tmp = query(i,j,0,n-1,0);
//				if(tmp.min>=h){
//					tot += (tmp.min-h+1);
//				}
//			}
//		}
//	}
	for(int w=1;w<=min(n,m);w++){
		if(m%w==0){
			int h = m/w;
			for(int j=0;j+w-1<n;j++){
				node tmp = query(j,j+w-1,0,n-1,0);
				if(tmp.min>=h){
					tot += (tmp.min-h+1);
				}
			}
		}
	}
	cout<<tot<<endl;
	
	
	

	return 0;
}



