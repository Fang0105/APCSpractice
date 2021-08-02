#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	double fo,fe,fa;
	while(cin>>fo>>fe>>fa&&(fo||fe||fa)){
		double m = fo/fe;
		double ft = fa/m;
		cout<<fixed<<setprecision(2)<<m<<" "<<ft<<endl; 
	}



	return 0;
}



