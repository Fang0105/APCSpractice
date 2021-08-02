#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int quickpow(int a,int b,int mod){
	int base = a%mod;
	int ans = 1;
	while(b!=0){
		if(b&1){
			ans = (ans*base)%mod;			
		}
		base = (base*base)%mod;
		b>>=1;
	}
	return ans;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<quickpow(a,b,c)<<endl;



	return 0;
}



