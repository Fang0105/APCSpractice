#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(getline(cin,str)){
		int l = 0,r = str.size()-1;
		bool b = true;
		while(l<=r){
			if(!((str[l]<='z'&&str[l]>='a')||(str[l]<='Z'&&str[l]>='A')||(str[l]<='9'&&str[l]>='0'))){
				l++;
				continue;
			}
			if(!((str[r]<='z'&&str[r]>='a')||(str[r]<='Z'&&str[r]>='A')||(str[r]<='9'&&str[r]>='0'))){
				r--;
				continue;
			}
			int a = ('A'-'a');
			int p = (str[l]-str[r]);
			if(!(p==a||p==0||p==(-1*a))){
				b = false;
				break;
			}else{
				l++;
				r--;
			}
		}
		cout<<str<<endl;
		if(b){
			cout<<"-- is a palindrome"<<endl;
		}else{
			cout<<"-- is not a palindrome"<<endl;
		}
	}



	return 0;
}



