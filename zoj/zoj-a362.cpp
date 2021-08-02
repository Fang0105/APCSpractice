#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

struct Status{
	int w,h,loc;
};


bool comp(Status s1,Status s2){
	if(s1.h==s2.h){
		if(s1.w==s2.w){
			return s1.loc<s2.loc;
		}else{
			return s1.w<s2.w;
		}
	}else{
		return s1.h<s2.h;
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	Status status[n];
	for(int i=0;i<n;i++){
		cin>>status[i].h>>status[i].w;
		status[i].loc = i;
	}
	sort(status,status+n,comp);
	int cnt = 0;
	for(int i=0;i<n;i++){
		cnt += abs(status[i].loc-i);
	}
	cout<<cnt<<endl;

	return 0;
}



