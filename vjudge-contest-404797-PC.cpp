#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int x,y;
	cin>>x>>y;
	if(x>0&&y>0){
		cout<<1<<endl;
	}else if(x<0&&y>0){
		cout<<2<<endl;
	}else if(x<0&&y<0){
		cout<<3<<endl;
	}else{
		cout<<4<<endl;
	}






	return 0;
}

