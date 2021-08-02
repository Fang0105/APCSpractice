#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
struct URL{
	int n;
	string url;
};
bool comp(URL u1,URL u2){
	if(u1.n==u2.n){
		return false;
	}
	return u1.n>u2.n;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int k,p=1;
	cin>>k;
	while(k--){
		URL web[10];
		for(int i=0;i<10;i++){
			cin>>web[i].url>>web[i].n;
		}
		sort(web,web+10,comp);
		cout<<"Case #"<<p++<<":"<<endl;
		cout<<web[0].url<<endl;
		for(int i=1;i<10;i++){
			if(web[i].n==web[0].n){
				cout<<web[i].url<<endl;
			}else{
				break;
			}
		}
		
	}






	return 0;
}

