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
	cin>>n;
	while(n--){
		double bx,by;
		cin>>bx>>by;
		int k;
		cin>>k;
		bool b = false;
		for(int i=0;i<k;i++){
			double cx,cy;
			cin>>cx>>cy;
			double dx = cx-bx,dy = cy-by;
			if(dx*dx+dy*dy<=64.0){
				b = true;
			}
		}
		if(b){
			cout<<"light a candle"<<endl;
		}else{
			cout<<"curse the darkness"<<endl;
		}
	}



	return 0;
}



