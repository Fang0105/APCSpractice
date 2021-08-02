#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int dp[105][105][105];
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	for(int i=0;i<=s1.length();i++){
		for(int j=0;j<=s2.length();j++){
			for(int k=0;k<=s3.length();k++){
				if(i==0||j==0||k==0){
					dp[i][j][k] = 0;
				}else if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1]){
					dp[i][j][k] = dp[i-1][j-1][k-1]+1;
				}else{
					dp[i][j][k] = max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
				}
			}
		}
	}
	cout<<dp[s1.length()][s2.length()][s3.length()]<<endl;





	return 0;
}

