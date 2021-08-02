#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

set<int>se;
void met(){
	for(int i=0;i<=50000;i++){
		se.insert(i*i);
	}
}


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	met();
	int n;
	while(cin>>n&&n){
		int k = sqrt(*se.lower_bound(n));
		int x,y;
		if(k==1){
			x = 1;
			y = 1;
		}else{
			if(k*k-n>k-1){
				x = k;
				y = k-(k*k-(k-1)-n);
			}else{
				y = k;
				x = k*k-n+1;
			}
		}
		if(k%2==0){
			swap(x,y);
		}
		cout<<x<<" "<<y<<endl;
	}



	return 0;
}



