#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	double g,t,tot = 0.0;
	cin>>g>>t;
	tot += 3.0*(g/10.0) + 2.0*(9.0*g/10.0);
	if(t >= tot){
		cout<<"Loli Loli!"<<endl;
	}else if(tot-t<5.0){
		cout<<"Q_3lppl3_Q"<<endl;
	}else{
		cout<<"Hentai!"<<endl;
	}






	return 0;
}

