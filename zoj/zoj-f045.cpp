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
	string str;
	cin>>str;
	vector<int>ve;
	for(int i=0;i<str.size();i++){
		ve.push_back(str[i]-'0'); 
	}
	sort(ve.begin(),ve.end());
	int p = ve[ve.size()-1]*ve[ve.size()-1]+ve[ve.size()-2]*ve[ve.size()-2];
	int h = 0;
	int cnt = 0;
	for(int i=0;i<3;i++){
		cnt += (str[str.size()-1-i]-'0')*pow(10,h++);
	}
	if(p==cnt){
		cout<<"Good Morning!"<<endl;
	}else{
		cout<<"SPY!"<<endl;
	}



	return 0;
}



