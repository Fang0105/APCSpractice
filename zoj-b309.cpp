#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
string toLowerCase(string str) {
	string ans = "";
	int k = 'a' - 'A';
    for(int i=0;i<str.size();i++){
    	char c = str[i];
    	if(c<='Z'&&c>='A'){
    		ans += (char)(c+k);
		}else if(c<='z'&&c>='a'){
			ans += c;
		}
	}
	return ans;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	map<string,int>mp;
	string str;
	while(getline(cin,str)){
		str = toLowerCase(str);
		int k = (int)'a';
		for(int i=0;i<str.size();i++){
			int p = ((int)str[i] - k)%7;
			if(p==0){
				mp["Saber"]++;
			}else if(p==1){
				mp["Lancer"]++;
			}else if(p==2){
				mp["Archer"]++;
			}else if(p==3){
				mp["Rider"]++;
			}else if(p==4){
				mp["Caster"]++;
			}else if(p==5){
				mp["Assassin"]++;
			}else{
				mp["Berserker"]++;
			}
		}
	}
	string mx = "Saber";
	for(pair<string,int>p : mp){
		if(p.second>mp["Saber"]){
			mx = p.first;
		}
	}
	cout<<mx<<endl;







	return 0;
}

