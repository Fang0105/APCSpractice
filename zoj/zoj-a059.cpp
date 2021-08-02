#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int cnt = 1;
	while(n--){
		int a,b;
		cin>>a>>b;
		int sum = 0;
		for(int i=a;i<=b;i++){
			int k = sqrt(i);
			if(k*k==i){
				sum+=i;
			}
		}
		cout<<"Case "<<cnt++<<": "<<sum<<endl;
	}






	return 0;
}

