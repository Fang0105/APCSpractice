#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

bool comp(string s1,string s2){
	int a = s1.size(),b = s2.size();
	int lcs = a*b/__gcd(a,b);
	for(int i=0;i<lcs;i++){
		int n = i%a,m = i%b;
		if(s1[n]!=s2[m]){
			return s1[n]>s2[m];
		}
	}
	return true;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		vector<string>ve;
		for(int i=0;i<n;i++){
			string str;
			cin>>str;
			ve.push_back(str);
		}
		sort(ve.begin(),ve.end(),comp);
		for(string s:ve){
			cout<<s;
		}
		cout<<endl;
	}



	return 0;
}



