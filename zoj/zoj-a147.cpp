#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n && n){
		bool first = true;
		for(int i=1;i<n;i++){
			if(i%7){
				if(first){
					first = false;	
				}else{
					cout<<" ";
				}
				cout<<i;
			} 
		}
		cout<<endl;
	}






	return 0;
}

