#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

void check(char c){
	if(c>='a'){
		cout<<(char)(c-('a'-'A'));
	}else{
		cout<<c;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(getline(cin,str)&&str!="END"){
		string last = "";
		check(str[0]);
		for(int i=0;i<str.size();i++){
			if(str[i]==' '){
				check(str[i+1]);
				last = "";
			}else{
				last += str[i];
			}
		}
		cout<<" "<<last<<endl;
	}



	return 0;
}



