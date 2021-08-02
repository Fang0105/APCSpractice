#include<bits/stdc++.h>
#include<algorithm>
#define int long long
#define endl '\n'
using namespace std;
int cnt = 0;
void print(pair<int,int>p){
	if(cnt==0){
		cnt++;
	}else{
		cout<<" * ";
	}
	cout<<p.first;
	if(p.second!=1){
		cout<<"^"<<p.second;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	map<int,int>mp;
	while(n!=1){
		for(int i=2;i<=n;i++){
			if(n%i==0){
				++mp[i];
				n/=i;
				break;
			}
		}
	}
	for_each(mp.begin(),mp.end(), print);
	cout<<endl;





	return 0;
}

