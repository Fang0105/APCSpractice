#include<bits/stdc++.h>
#define int unsigned long long
#define endl '\n'
using namespace std;
int arr[95] = {0};
int fa(int n){
	if(n==0){
		arr[n] = 0;
	}else if(n==1){
		arr[n] = 1;
	}else{
		if(arr[n]==0){
			arr[n] = fa(n-1) + fa(n-2);
		}
	}
	return arr[n];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	int tem = fa(93);
	while(cin>>n>>m){
		cout<<arr[__gcd(n,m)]<<endl;
	}






	return 0;
}

