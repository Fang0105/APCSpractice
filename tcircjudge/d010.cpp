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
	set<int>se;
	while(n--){
		int a;
		cin>>a;
		se.insert(a);
	}
	cout<<se.size()<<endl;
	int flag = false;
	for(int i:se){
		if(flag==false){
			flag = true;
		}else{
			cout<<" ";
		}
		cout<<i;
	}
	cout<<endl;


	return 0;
}



