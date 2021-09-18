#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int pow2(int a,int b,int c){
    int ans=1; 
	a=a%c;   
    while(b!=0){
    	if(b&1){
            ans=(ans*a)%c;   
        }
        b>>=1;    
        a=(a*a)%c;   
    }
    return ans;
 }

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<pow2(a,b,c)<<endl;



	return 0;
}



