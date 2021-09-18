#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int find_root(int arr[],int x){
	if(arr[x]==x){
		return x;
	}
	int root = find_root(arr,arr[x]);
	return root;
}
void con(int arr[],int x,int y){
	int root_x = find_root(arr,x);
	int root_y = find_root(arr,y);
	arr[root_x] = root_y;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		arr[i] = i;
	}
	for(int i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		con(arr,a,b);
	}
	int cnt = 0;
	int goal = find_root(arr,0);
	for(int i=0;i<n;i++){
		if(find_root(arr,i)==goal){
			cnt++;
		}
	}
	cout<<cnt<<endl;


	return 0;
}



