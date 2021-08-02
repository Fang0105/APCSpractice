#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin>>n>>k;
	int tot = 0,money = 0;
	while(n--){
		int a,b,c;
		cin>>a>>b>>c;
		if(max({a,b,c})-min({a,b,c})>=k){
			tot++;
			money += (a+b+c)/3;
		}
	}
	cout<<tot<<" "<<money<<endl;



	return 0;
}



