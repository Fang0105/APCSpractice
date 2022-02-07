#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int max(int a,int b){
    return a>b?a:b;
}
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    while(cin>>n&&n){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int dp[n];
        dp[0] = max(0,arr[0]);
        int mx = dp[0];
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1],0)+arr[i];
            mx = max(mx,dp[i]);
        }
        if(mx>0){
            cout<<"The maximum winning streak is "<<mx<<"."<<endl;
        }else{
            cout<<"Losing streak."<<endl;
        }
    }









    return 0;
}