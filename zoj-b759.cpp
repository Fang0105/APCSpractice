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
	cin>>str;
	for(int i=0;i<str.size();i++){
		bool b = true;
		for(int j=i;(j!=i||b);j=(j==str.size()-1?0:j+1)){
			b = false;
			cout<<str[j];
		}
		cout<<endl;
	}
	
	
	
	
	
	



	return 0;
}



