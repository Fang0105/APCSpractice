#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


int a,b,x;
int cun(int n){
	int tot = a*n;
	int dig = 0;
	while(n!=0){
		n/=10;
		dig++;
	}
	tot += b*dig;
	return tot;
}

int mysearch(int goal){
	int l = 0;
	int r = 1000000000;
	while(l<=r){
		int mid = l+(r-l)/2;
		if(cun(mid)>goal){
			r = mid-1;
		}else{
			l = mid+1;
		}
	}
	if(r<0){
		return 0;
	}else{
		return r;
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>a>>b>>x;
	int k = mysearch(x);
	cout<<k<<endl;
	


	return 0;
}



