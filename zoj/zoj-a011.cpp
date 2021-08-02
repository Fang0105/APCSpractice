#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
//#define stringstream ss
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str,tmp,kk;
	while(getline(cin,str)){
		for(int i=0;i<str.size();i++){
			if((str[i]>='a'&&str[i]<='z')||(str[i]<='Z'&&str[i]>='A')){
					//str[i] = " ";
					kk += " ";
			}else{
				kk += str[i];
			}
		}
		stringstream sss(str);
		int ans = 0;
		while(sss>>tmp){
			ans++;
		}
		cout<<ans<<endl;
	}
	
	



	return 0;
}

