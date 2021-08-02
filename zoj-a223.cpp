#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
string str;
bool comp(int n){
	for(int i=0;i<str.size()/n;i++){
		for(int j=i;j<str.size();j+=(str.size()/n)){
			if(str[j]!=str[i]){
				return false;
			}
		}
	}
	return true;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	while(cin>>str&&str!="."){
		int i = str.size()-1;
		for(i=str.size();i>0;i--){
			if(str.size()%i==0){
				if(comp(i)){
					break;
				}
			}
		}
		cout<<i<<endl;
	}






	return 0;
}

