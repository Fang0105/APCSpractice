#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--){
		string str;
		cin>>str;
		if(str.size()>10){
			cout<<str[0]<<str.size()-2<<str[str.size()-1]<<endl;
		}else{
			cout<<str<<endl;
		}
	}




	return 0;
}



