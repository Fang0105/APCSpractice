#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int arr[105][105];
int C(int a,int b){
	if(a==0 || b==0 || a==b){
		arr[a][b] = 1;
	}else{
		if(arr[a][b]==0){
			arr[a][b] = C(a-1,b-1) + C(a-1,b);
		}
	}
	return arr[a][b];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m && (n!=0&&m!=0)){
		cout<<n<<" things taken "<<m<<" at a time is "<<C(n,m)<<" exactly."<<endl;
	}






	return 0;
}

