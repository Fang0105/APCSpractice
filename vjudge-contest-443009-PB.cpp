#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

string cha(string str){
	for(int i=0;i<str.size();i++){
		if(str[i]=='-'){
			str[i] = ' ';
		}else if(str[i]>='a'&&str[i]<='z'){
			str[i]-=('a'-'A');
		}
	}
	return str;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	set<string>se;
	cin.ignore();
	for(int i=0;i<n;i++){
		string str;
		getline(cin,str);
		str = cha(str);
		se.insert(str);
	}
	
	cout<<se.size()<<endl;
	

	return 0;
}



