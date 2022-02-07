#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
bool dp[10000+5][105];

 signed main(){
    int p;
    cin>>p;
    while (p--){
        int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }  
        for(int i=0;i<=n;i++){
            for(int j=0;j<k;j++){
                dp[i][j] = false;
            }
        }
        // for(int i=1;i<k;i++){
        //     dp[0][i] = false;
        // }
        dp[0][0] = true;
        for(int i=1;i<=n;i++){
            for(int j=0;j<k;j++){
                if(dp[i-1][j]==true){
                    int mod1 = (j+abs(arr[i])%k)%k;
                    int mod2 = (j-abs(arr[i])%k)%k;
                    dp[i][mod1] = true;
                    dp[i][mod2] = true;
                }
            }
        }
        for(int i=0;i<=n;i++){
            cout<<i<<"-> ";
            for(int j=0;j<k;j++){
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }
        if(dp[n][0]){
            cout<<"Divisible"<<endl;
        }else{
            cout<<"Not Divisible"<<endl;
        }
    }
    
     




    return 0;
 }