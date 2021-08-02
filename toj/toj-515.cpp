#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	cin>>str;
	if(str.length()!=4){
		cout<<"OAQ"<<endl;
		return 0;
	}else{
		for(int i=1;i<4;i++){
			if(str[i]!=str[i-1]){
				cout<<"OAQ"<<endl;
				return 0;
			}
		}
	}
	cout<<"GREAT!!"<<endl;






	return 0;
}

