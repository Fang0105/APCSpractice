#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		stack<int>st;
		while(n!=0){
			st.push(n%2);
			n/=2;
		}
		int b = st.size();
		for(int i=0;i<b;i++){
			cout<<st.top();
			st.pop();
		}
		cout<<endl;
	}






	return 0;
}

