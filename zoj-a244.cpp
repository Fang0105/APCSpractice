#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		switch (a){
			case 1:
				cout<<b+c<<endl;
				break;
			case 2:
				cout<<b-c<<endl;
				break;
			case 3:
				cout<<b*c<<endl;
				break;
			default:
				cout<<b/c<<endl;
				break;		
		}
	}






	return 0;
}

