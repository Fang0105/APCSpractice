#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	m = m/1000;
	int mx = 0,num;;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		if(b<=29){
			if(a+10*m>mx){
				num = i+1;
			}
			mx = max(mx,a+10*m);
		}else if(b<=39){
			if(a+50*m>mx){
				num = i+1;
			}
			mx = max(mx,a+50*m);
		}else{
			if(a+100*m>mx){
				num = i+1;
			}
			mx = max(mx,a+100*m);	
		}
	}
	cout<<num<<" "<<mx<<endl;






	return 0;
}

