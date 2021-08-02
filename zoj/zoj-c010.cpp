#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

vector<int>ve;

void put(int n){
	bool b = true;
	for(int i=0;i<ve.size();i++){
		if(ve[i]<=n){
			 ve.insert(ve.begin()+i,n);
			 b = false;
			 break;
		}
	}
	if(b){
		ve.push_back(n);
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	int cnt = 1;
	
	while(cin>>n){
		put(n);
		if(cnt%2==0){
			cout<<(ve[cnt/2]+ve[cnt/2-1])/2<<endl;
		}else{
			cout<<ve[cnt/2]<<endl;
		}
		cnt++;
	}






	return 0;
}

