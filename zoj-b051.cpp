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
	string s1 = "",s2 = "";
	while(a!=0){
		int tem = a%10;
		char c = (char)(tem+'0');
		s1 = c + s1;
		a/=10;
	}
	while(b!=0){
		int tem = b%10;
		char c = (char)(tem+'0');
		s2 = c + s2;
		b/=10;
	}
	string a1 = s1+s2,a2 = s2+s1;
	for(int i=0;i<a1.size();i++){
		if(a1[i]>a2[i]){
			return true;
		}else if(a1[i]<a2[i]){
			return false;
		}
	}
	return false;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		vector<int>ve;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			ve.push_back(a);
		}
		sort(ve.begin(),ve.end(),comp);
		for(int i:ve){
			cout<<i;
		}
		cout<<endl;
	}
	
	

	return 0;
}

