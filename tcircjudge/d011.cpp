#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	set<int>se;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		se.insert(arr[i]);
	}
	int k=0;
	for(int i:se){
		mp[i] = k++;
	}
	for(int i=0;i<n;i++){
		if(i!=0){
			cout<<" ";
		}
		cout<<mp[arr[i]];
	}
	cout<<endl;
	
	



	return 0;
}



