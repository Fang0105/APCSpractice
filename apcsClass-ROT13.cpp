#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	getline(cin,str);
	string ans = "";
	for(int i=0;i<str.length();i++){
		if(str[i]>='A'&&str[i]<='Z'){
			int a = (int)str[i] + 13;
			if(a>(int)'Z'){
				a-=26;
			}
			ans = ans + (char)a;
		}else if(str[i]>='a'&&str[i]<='z'){
			int a = (int)str[i] + 13;
			if(a>(int)'z'){
				a-=26;
			}
			ans = ans + (char)a;
		}else{
			ans  = ans + str[i];
		}
	}
	cout<<ans<<'\n';






	return 0;
}

