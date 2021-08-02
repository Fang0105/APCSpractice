#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

vector<int>fa;
bool dp[1000] = {false};
int n;
int loc;
void FA(){
	int a = 1;
	int b = 2;
	fa.push_back(a);
	do{
		fa.push_back(b);
		int tem = a;
		a = b;
		b = tem+b;
	}while(b<=2000000000);
}


void init(){
	memset(dp,0,sizeof(dp));
}
bool fun(int id,int remain){
	if(remain-fa[id]==0){
		loc = id;
		dp[id] = true;
	}else{
		for(int i=id+2;fa[i]<=remain;i++){
			if(dp[id]){
				break;
			}else{
				dp[id] = fun(i,remain-fa[id]);
			}
		}
	}
	return dp[id];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	FA();
	int m;
	cin>>m;
	while(m--){
		init();
		cin>>n;
		int i=0;
		while(!fun(i,n)){
			i++;
		}
		cout<<n<<" = ";
		for(int j=loc;j>=0;j--){
			if(dp[j]){
				cout<<1;
			}else{
				cout<<0;
			}
		}
		cout<<" (fib)"<<endl;
	}



	return 0;
}



