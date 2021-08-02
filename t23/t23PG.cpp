#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int arr[25];
int dp[25] = {0};
int n,m,mx = 0,lim;
bool b = false;
void fun(int id,int loc){
	if(b==true){
		return;
	}else{
		for(int i=loc;i<n;i++){
			if(b==true){
				return;
			}
			if(dp[i]+arr[id]<=lim){
				dp[i]+=arr[id];
				if(id==m-1){
					b = true;
					return;
				}
				fun(id+1,0);
				dp[i]-=arr[id];
			}
		}
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>arr[i];
		mx += arr[i];
	}
	if(mx%n==0){
		lim = mx/n;
		fun(0,0);
	}
	if(b){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}



	return 0;
}



