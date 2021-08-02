#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	if(n==0){
		cout<<"Nothing"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				if(j%2==0){
					cout<<'*';
				}else{
					cout<<'-';
				}
			}
		}else{
			for(int j=0;j<n;j++){
				if(j%2==0){
					cout<<'-';
				}else{
					cout<<'*';
				}
			}
		}
		cout<<endl;
	}






	return 0;
}

