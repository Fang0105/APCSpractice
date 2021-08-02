#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		int sum = 0;
		if(n>40){
			cout<<100<<endl;
			continue;
		}
		if(n>20){
			sum += (n-20);
			n=20;
		}
		if(n>10){
			sum += 2*(n-10);
			n = 10;
		}
		sum += 6*(n);
		cout<<sum<<endl;
	}






	return 0;
}

