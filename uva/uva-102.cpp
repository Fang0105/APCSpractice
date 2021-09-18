#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

struct Bucket{
	int b,g,c;
};
Bucket bucket[3];
int b=0,g=0,c=0;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	while(cin>>bucket[0].b>>bucket[0].g>>bucket[0].c>>bucket[1].b>>bucket[1].g>>bucket[1].c>>bucket[2].b>>bucket[2].g>>bucket[2].c){
		b=0,g=0,c=0;
		for(int i=0;i<3;i++){
			b+=bucket[i].b;
			g+=bucket[i].g;
			c+=bucket[i].c;
		}
		int mn = MAX;
		string ans;
		int mg,mb,mc;
		//-----BCG
		mb = b-bucket[0].b;
		mc = c-bucket[1].c;
		mg = g-bucket[2].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "BCG";
		}
		//-----BGC
		mb = b-bucket[0].b;
		mc = c-bucket[2].c;
		mg = g-bucket[1].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "BGC";
		}
		//-----CBG
		mb = b-bucket[1].b;
		mc = c-bucket[0].c;
		mg = g-bucket[2].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "CBG";
		}
		//-----CGB
		mb = b-bucket[2].b;
		mc = c-bucket[0].c;
		mg = g-bucket[1].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "CGB";
		}
		//-----GBC
		mb = b-bucket[1].b;
		mc = c-bucket[2].c;
		mg = g-bucket[0].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "GBC";
		}
		//-----GCB
		mb = b-bucket[2].b;
		mc = c-bucket[1].c;
		mg = g-bucket[0].g;
		if(mn>mb+mc+mg){
			mn = mb+mc+mg;
			ans = "GCB";
		}
		//-----
		cout<<ans<<" "<<mn<<endl;
	}


	return 0;
}



