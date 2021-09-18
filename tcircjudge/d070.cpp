#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	int mx = 0;
	int lcs[s1.size()];
	for(int i=0;i<s1.size();i++){
		lcs[i] = 0;
		for(int j=0;j<=i;j++){
			if(s1[i]==s2[j]){
				lcs[i] = max(lcs[i],lcs[j]+1);
			}
		}
		mx = max(lcs[i],mx);
	}
	cout<<mx<<endl;
	for(int i:lcs){
		cout<<i<<" ";
	}


	return 0;
}



