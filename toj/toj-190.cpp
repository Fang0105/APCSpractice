#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int cnt = 0;
	int tot = 0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		cnt += a*i;
		tot+=a;
	}
	if(cnt%tot==0){
		cout<<cnt/tot<<endl;
	}else{
		cout<<cnt/tot<<" "<<(cnt/tot)+1<<endl; 
	}



	return 0;
}



