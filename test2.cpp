#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int find(vector<int>ve,int goal){
	int l = 0,r = ve.size();
	while(l!=r){
		int mid = (l+r)/2;
		if(ve[mid]<goal){
			l = mid+1;
		}else if(ve[mid]>=goal){
			r = mid;
		}
	}
	return l-1;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	vector<int>ve;
	for(int i=0;i<=25;i++){
		ve.push_back(i);
	}
	for(int i=0;i<=27;i++){
		cout<<i<<" "<<find(ve,i)<<endl;
	}



	return 0;
}



