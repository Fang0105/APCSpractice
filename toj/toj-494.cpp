#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<n;k++){
				if(i%2==k%2){
					cout<<string(m,'*');
				}else{
					cout<<string(m,' ');
				}
			}
			cout<<endl;
		}
	}






	return 0;
}

