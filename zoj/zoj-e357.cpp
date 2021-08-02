#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int fun(int n){
	if(n==1){
		return 1;
	}else if(n%2==0){
		return fun(n/2);
	}else{
		return fun(n-1)+ fun(n+1);
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	cout<<fun(n)<<endl;






	return 0;
}

