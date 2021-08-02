#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int pow2(int n,int k){
	int ans = 1;
	int base = n;
	while(k!=0){
		if(k&1){
			ans*=base;
		}
		base*=base;
		k>>=1;
	}
	return ans;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);




	return 0;
}



