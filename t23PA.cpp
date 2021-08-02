#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(getline(cin,str)){
		int cnt = 0;
		for(int i=0;i<str.size();i++){
			if(str[i]<='9'&&str[i]>='0'){
				cnt += (str[i]-'0');
			}
		}
		cout<<cnt<<endl;
	}



	return 0;
}



