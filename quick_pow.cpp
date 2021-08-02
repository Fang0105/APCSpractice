#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int pow(int a,int b){
	int base = a,ans = 1;
	while(b!=0){
		if(b&1!=0){
			ans*=base;
		}
		base*=base;
		b>>=1;
	}
	return ans;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;



	return 0;
}



