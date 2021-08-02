#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int max(int n,int k){
	if(n>k){
		return n;
	}else{
		return k;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int big = 0;
	for(int i=0;i<3;i++){
		int a;
		cin>>a;
		big = max(big,a);
	}
	cout<<big<<endl;






	return 0;
}

