#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string be,re;
	getline(cin,be);
	getline(cin,re);
	int loc;
	for(int i=0;i<be.size();i++){
		for(int j=0;j<re.size();j++){
			if(be[i+j]!=re[j]){
				break;
			}
			if(j==re.size()-1&&be[i+j]==re[j]){
				loc = i;
				i = be.size();
			}
		}
	}
	for(int i=be.size()-1;i>=loc+re.size();i--){
		cout<<be[i];
	}
	for(int i=0;i<re.size();i++){
		cout<<re[i];
	}
	for(int i=loc-1;i>=0;i--){
		cout<<be[i];
	}
	cout<<endl;



	return 0;
}



