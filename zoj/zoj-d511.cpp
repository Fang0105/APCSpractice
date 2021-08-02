#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,c;
	int cnt = 0;
	for(int i=0;i<5;i++){
		cin>>a>>b>>c;
		if(a<b+c&&b<a+c&&c<a+b){
			cnt++;			
		}
	}
	cout<<cnt<<endl;






	return 0;
}

