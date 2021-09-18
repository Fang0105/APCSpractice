#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int mod = 1000000007;
struct Arr{
    int arr[4][2];
};
signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    while(cin>>n){
        vector<Arr>ve;
        Arr init;
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                if(i==2){
                    init.arr[i][j] = 0;
                }else if(i==3){
                    if(j==1){
                        init.arr[i][j] = 1;
                    }else{
                        init.arr[i][j] = 0;
                    }
                }else{
                    if(j==1){
                        init.arr[i][j] = 0;
                    }else{
                        init.arr[i][j] = 1;
                    }
                }
            }
        }
        ve.push_back(init);
        for(int i=1;i<n;i++){
            Arr tmp;
            for(int j=0;j<4;j++){
                for(int k=0;k<2;k++){
                    tmp.arr[j][k] = 0;
                }
            }
            for(int j1=0;j1<4;j1++){
                if(j1==0){
                    tmp.arr[j1][0]+=((ve[0].arr[0][0]+ve[0].arr[1][0])%mod+ve[0].arr[2][0])%mod;
                    tmp.arr[j1][1]+=((ve[0].arr[0][1]+ve[0].arr[1][1])%mod+(ve[0].arr[2][1]+ve[0].arr[3][1])%mod)%mod;
                }else if(j1==1){
                    tmp.arr[j1][0]+=(ve[0].arr[0][0])%mod;
                    tmp.arr[j1][1]+=(ve[0].arr[0][1]+ve[0].arr[3][1])%mod;
                }else if(j1==2){
                    tmp.arr[j1][0]+=(ve[0].arr[1][0])%mod;
                    tmp.arr[j1][1]+=(ve[0].arr[1][1])%mod;
                }else if(j1==3){
                    tmp.arr[j1][0] = 0;
                    tmp.arr[j1][1]+= ((ve[0].arr[0][0]+ve[0].arr[1][0])%mod+ve[0].arr[2][0])%mod;
                }
            }
            ve.push_back(tmp);
            ve.erase(ve.begin());
        }
        int sum = 0;
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                sum += (ve[0].arr[i][j])%mod;
            }
        }
        cout<<sum%mod<<endl;
    }
    


    return 0;
}
