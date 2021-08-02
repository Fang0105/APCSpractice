#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	while(n--){
		stack<char>st;
		string str;
		cin>>str;
		int tot = 0;
		for(char c:str){
			if(c!='.'){
				if(c=='p'){
					st.push(c);
				}else{
					if(st.empty()==true){
						st.push(c);
					}else{
						if(st.top()=='p'){
							st.pop();
							tot++;
						}else{
							st.push(c);
						}
					}
				}
			}
		}
		cout<<tot<<endl;
	}



	return 0;
}



