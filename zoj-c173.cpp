#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int dp[6000][6000];
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);
	string s1,s2;
	while(cin>>s1>>s2){
		memset(dp,0,sizeof(dp));
		for(int i=0;i<=s1.length();i++){
			for(int j=0;j<=s2.length();j++){
				if(i==0||j==0){
					dp[i][j] = 0;
				}else if(s1[i-1]==s2[j-1]){
					dp[i][j] = dp[i-1][j-1]+1;
				}else{
					dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}	
		cout<<dp[s1.length()][s2.length()]<<endl;
	}	



  return 0;
}

