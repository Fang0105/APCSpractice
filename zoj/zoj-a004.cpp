#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		if((n%4==0&&n%100!=0)||(n%400==0)){
			cout<<"¶|¦~\n";	
		}else{
			cout<<"¥­¦~\n";
		}
	}
	





	return 0;
}

