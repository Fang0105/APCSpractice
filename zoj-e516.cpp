#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		int u = 1,b = 2,l = 3,d = 6,f = 5,r = 4;
		for(int i=0;i<n;i++){
			string order;
			cin>>order;
			if(order=="east"){
				int tem = u;
				u = l;
				l = d;
				d = r;
				r = tem;
			}else if(order=="south"){
				int tem = u;
				u = b;
				b = d;
				d = f;
				f = tem;
			}else if(order=="west"){
				int tem = u;
				u = r;
				r = d;
				d = l;
				l = tem;
			}else if(order=="north"){
				int tem = u;
				u = f;
				f = d;
				d = b;
				b = tem;
			}	
		}
		cout<<u<<endl;
	}
	
	
	


	return 0;
}



