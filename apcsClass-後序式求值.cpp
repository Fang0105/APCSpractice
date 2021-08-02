#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(cin>>str){
		stack<int>st;
		for(int i=0;i<str.size();i++){
			if(str[i]>='0'&&str[i]<='9'){
				st.push(str[i]-'0');
			}else{
				int b = st.top();
				st.pop();
				int a = st.top();
				st.pop();
				if(str[i]=='+'){
					st.push(a+b);
				}else if(str[i]=='-'){
					st.push(a-b);
				}else if(str[i]=='*'){
					st.push(a*b);
				}else if(str[i]=='/'){
					st.push(a/b);
				}else if(str[i]=='%'){
					st.push(a%b);
				}
			}
		}
		cout<<st.top()<<endl;
	}




	return 0;
}

