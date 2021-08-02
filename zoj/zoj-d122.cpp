#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		int cnt = 0;
		for(int i=1;i<n;i++){
			if(n>=(pow(5,i))){
				cnt += n/(pow(5,i));
			}else{
				break;
			}
		}
		cout<<cnt<<endl;
	}






	return 0;
}

