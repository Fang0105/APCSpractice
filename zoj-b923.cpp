#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	stack<int>st;
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		if(a==1){
			st.pop();
		}else if(a==2){
			cout<<st.top()<<endl;
		}else if(a==3){
			int b;
			cin>>b;
			st.push(b);
		}
	}



	return 0;
}



