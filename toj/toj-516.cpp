#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
bool check(int n){
	if(n==2){
		return true;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int arr[1000000];
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	n++;
	int cnt = 0;
	int k = 2;
	while(cnt!=n){
		if(check(k++)){
			cnt++;
		}
	}
	cout<<k-2<<endl;





	return 0;
}

