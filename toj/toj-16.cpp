#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int h;
    cin>>h;
    while(h--){
        int n;
        cin>>n;
        int arr[15010];
        int se[n];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++){
            cin>>se[i];
            arr[se[i]]++;
        }
        int p;
        cin>>p;
        while(p--){
            bool b = false;
            int w;
            cin>>w;
            for(int i=0;i<n;i++){
                if(b){
                    break;
                }
                arr[se[i]]--;
                for(int j=0;j<n;j++){
                    if(arr[se[j]]>0&&w-se[i]-se[j]==0){
                        b = true;
                        break;
                    }
                }
                arr[se[i]]++;
            }
            if(b){
                cout<<"Good!"<<endl;
            }else{
                cout<<"So Bad!"<<endl;
            }
        }
    }



    return 0;
}
