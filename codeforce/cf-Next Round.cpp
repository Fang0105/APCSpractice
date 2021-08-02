#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int st = arr[m-1];
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>0&&arr[i]>=st){
			cnt++;
		}
	}
	cout<<cnt<<endl;



	return 0;
}



