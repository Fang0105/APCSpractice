#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
struct Num{
	int val;
	int site;
	int layer;
};
Num arr[100005];
int dp[100005] = {0};

int fun(int id){
	if(dp[id]!=0){
		return dp[id];
	}else{
		if(id==1){
			dp[id] = arr[id].val;
		}else{
			if(arr[id].site==-1){
				dp[id] = fun(id-(arr[id].layer-1))+arr[id].val;
			}else if(arr[id].site==0){
				dp[id] = max(fun(id-arr[id].layer),fun(id-(arr[id].layer-1)))+arr[id].val;
			}else{
				dp[id] = fun(id-arr[id].layer)+arr[id].val;
			}
		}
	}
	return dp[id];
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int tot = n*(n+1)/2;
	int nowlayer = 1;
	for(int i=1;i<=tot;i++){
		int v;
		cin>>v;
		arr[i].val = v;
		if(i==(nowlayer*(nowlayer+1)/2)){
			arr[i].site = 1;
		}else if(i==(nowlayer*(nowlayer+1)/2+1)){
			arr[i].site = -1;
			nowlayer++;
		}else{
			arr[i].site = 0;
		}
		arr[i].layer = nowlayer;
	}
//	cout<<"1	"<<arr[1].val;
//	for(int i=2;i<=tot;i++){
//		if(arr[i].layer!=arr[i-1].layer){
//			cout<<endl;
//			cout<<arr[i].layer<<"	";
//		}
//		cout<<arr[i].val<<" ";
//	}
	int tem = tot;
	int mx = MIN;
	while(arr[tem].site!=-1){
		mx = max(mx,fun(tem));
		tem--;
	}
	cout<<mx<<endl;










	return 0;
}



