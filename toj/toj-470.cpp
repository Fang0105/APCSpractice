#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int arr[1000005];
int dp[2][1000005];
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
            dp[0][i] = 0;
            dp[1][i] = 1;
        }
        dp[0][0] = arr[0];
        dp[1][0] = 0;
        int mx = max(dp[0][0],dp[1][0]);
        for(int i=1;i<n;i++){
            dp[0][i] = dp[1][i-1]+arr[i];
            dp[1][i] = max(dp[0][i-1],dp[1][i-1]);
            mx = max({mx,dp[0][i],dp[1][i]});
        }
        cout<<mx<<endl;
    }



    return 0;
}

