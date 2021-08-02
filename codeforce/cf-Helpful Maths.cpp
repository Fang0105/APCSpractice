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
	string str;
	cin>>str;
	vector<int>ve;
	for(int i=0;i<str.size();i+=2){
		ve.push_back(str[i]-'0');
	}
	sort(ve.begin(),ve.end());
	for(int i=0;i<ve.size();i++){
		if(i!=0){
			cout<<"+";
		}
		cout<<ve[i];
	}
	cout<<endl;



	return 0;
}



