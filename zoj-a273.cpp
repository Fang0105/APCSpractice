#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		if(n==0 && m==0){
			cout<<"Ok!"<<endl;
			continue;
		}
		if(m==0 || n%m){
			cout<<"Impossib1e!"<<endl;
		}else{
			cout<<"Ok!"<<endl;
		}
	}






	return 0;
}

