#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

bool comp(int a,int b){
	if(a%7==0){
		if(b%7==0){
			return a%70>b%70;
		}else{
			return true;
		}
	}else{
		if(b%7==0){
			return false;
		}else{
			return a%77<b%77;
		}
	}
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	vector<int>ve;
	while(cin>>n&&n){
		ve.push_back(n);
	}
	sort(ve.begin(),ve.end(),comp);
	cout<<ve[0]<<endl;


	return 0;
}



