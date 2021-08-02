#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int a[1000000];
struct node{
	bool haslazy;
	int lazy;
	int size;
}arr[4000000];

node pull(node x,node y){
	node tmp;
	tmp.size = x.size+y.size;
	tmp.haslazy = ((x.haslazy&&y.haslazy)&&(x.lazy==y.lazy));
	tmp.lazy = (tmp.haslazy&&(x.lazy==y.lazy)?x.lazy:-1);
	return tmp;
}

void build(int L,int R,int id){
	if(L==R){
		arr[id].haslazy = true;
		arr[id].lazy = a[L];
		arr[id].size = 1;
		return ;
	}
	int mid = (L+R)/2;
	build(L,mid,IL(id));
	build(mid+1,R,IR(id));
	arr[id] = pull(arr[IL(id)],arr[IR(id)]);
}

void push(int id){
	arr[IL(id)].lazy = arr[id].lazy;
	arr[IR(id)].lazy = arr[id].lazy;
	arr[IL(id)].haslazy = true;
	arr[IR(id)].haslazy = true;
	arr[id].lazy = 0;
	arr[id].haslazy = false;
}

void modify(int i,int l,int r,int L,int R,int id){
	if(L==l&&R==r){
		arr[id].lazy = i;
		arr[id].haslazy = true;
		return ;
	}
	if(arr[id].haslazy){
		push(id);
	}
	int mid = (L+R)/2;
	if(r<=mid){
		modify(i,l,r,L,mid,IL(id));
	}else if(l>mid){
		modify(i,l,r,mid+1,R,IR(id));
	}else{
		modify(i,l,mid,L,mid,IL(id));
		modify(i,mid+1,r,mid+1,R,IR(id));
	}
	arr[id] = pull(arr[IL(id)],arr[IR(id)]);
}

void query(int id){
	if(arr[id].haslazy){
		for(int i=0;i<arr[id].size;i++){
			cout<<arr[id].lazy<<" ";
		}
	}else{
		query(IL(id));
		query(IR(id));
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	build(0,n-1,0);
	int m;
	cin>>m;
	while(m--){
		int q,w;
		cin>>q>>w;
		q--;
		modify(w,0,q,0,n-1,0);
	} 
	query(0);
	cout<<endl;
	



	return 0;
}
/*
5
1 1 1 4 1
5
3 2
3 1
3 3
1 1
2 4
*/


