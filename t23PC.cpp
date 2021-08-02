#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
			for(int i=0,j=n-1;i<n;i++,j--){
		cout<<string(j,' ');
		for(int k=0;k<=i;k++){
			cout<<(char)('A'+k);
		}
		cout<<endl;
	}
	for(int i=0,j=1;i<n-1;i++,j++){
		cout<<string(j,' ');
		for(int k=0;k<n-i-1;k++){
			cout<<(char)('A'+k);
		}
		cout<<endl;
	}
	}
	
	

	return 0;
}



