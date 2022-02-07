#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std ;

signed main(){
    int k,n;
    while(cin>>k>>n){
        double tot = pow(k+1,n);
        double dp[n+5][k+5];
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(i==1){
                    dp[i][j] = 1.0;
                }else{
                    if(j==0){
                        dp[i][j] = dp[i-1][0]+dp[i-1][1];
                    }else if(j==k){
                        dp[i][j] = dp[i-1][k]+dp[i-1][k-1];
                    }else{
                        dp[i][j] = dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1];
                    }
                }
            }
        }
        double cnt = 0.0;
        for(int i=0;i<=k;i++){
            cnt += dp[n][i];
        }
        cout<<fixed<<setprecision(5)<<cnt/tot*100.0<<endl;
    }






    return 0;
}