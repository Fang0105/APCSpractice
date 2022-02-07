#include<bits/stdc++.h>
#define int unsigned long long
#define endl '\n'
using namespace std;
int s[200005];
int b[200005];
int r[200005];
int n;
bool vis[200005][3] = {false};
int dp[200005][3];
int fun(int id,int sport){
    if(vis[id][sport]==false){
        vis[id][sport] = true;
        //cout<<id<<" "<<sport<<endl;
        if(sport==2){
            if(id==3){
                dp[id][sport] = fun(id-1,1)+r[id];
            }else{
                dp[id][sport] = min(fun(id-1,2),fun(id-1,1))+r[id];
            }  
        }else if(sport==1){
            if(id==2){
                dp[id][sport] = fun(id-1,0)+b[id];
            }else{
                dp[id][sport] = min(fun(id-1,1),fun(id-1,0))+b[id];
            }
        }else{
            if(id==1){
                dp[id][sport] = s[id];
            }else{
                dp[id][sport] = fun(id-1,0)+s[id];
            }
        }
    }
    return dp[id][sport];
}
signed main(){
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i]>>b[i]>>r[i];
    }
    cout<<fun(n,2)<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }





    return 0;
}
/*
7
2 3 4
5 10 3
6 8 9
5 9 1
4 2 3
4 6 2
7 5 3
*/