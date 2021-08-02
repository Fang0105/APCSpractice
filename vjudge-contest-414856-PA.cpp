#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	double rx,ry,dx,dy;
	cin>>rx>>ry>>dx>>dy;
	double x,y;
	while(cin>>x>>y){
		if(((rx-x)*(rx-x)+(ry-y)*(ry-y))*4<=(dx-x)*(dx-x)+(dy-y)*(dy-y)){
			cout<<"The gopher can escape through the hole at ("<<fixed<<setprecision(3)<<x<<","<<fixed<<setprecision(3)<<y<<")."<<endl;
			return 0;
		}
	}
	cout<<"The gopher cannot escape."<<endl;



	return 0;
}



