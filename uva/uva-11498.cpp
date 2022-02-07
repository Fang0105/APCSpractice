#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std ;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    while(cin>>n&&n){
        int mx,my;
        cin>>mx>>my;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            if(x==mx||y==my){
                cout<<"divisa"<<endl;
            }else if(x<mx&&y>my){
                cout<<"NO"<<endl;
            }else if(x>mx&&y>my){
                cout<<"NE"<<endl;
            }else if(x>mx&&y<my){
                cout<<"SE"<<endl;
            }else{
                cout<<"SO"<<endl;
            }
        }
    }






    return 0;
}