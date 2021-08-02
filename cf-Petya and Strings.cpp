#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		int a = s1[i]-(s1[i]<='z'&&s1[i]>='a'?'a'-'A':0);
		int b = s2[i]-(s2[i]<='z'&&s2[i]>='a'?'a'-'A':0);
		if(b>a){
			cout<<-1<<endl;
			return 0;
		}else if(b<a){
			cout<<1<<endl;
			return 0;
		}
	}
	cout<<0<<endl;
	


	return 0;
}



