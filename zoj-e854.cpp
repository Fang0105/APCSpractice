#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	multiset<char>se;
	string sam,src;
	getline(cin,sam);
	getline(cin,src);
	for(int i=0;i<src.size();i++){
		se.insert(src[i]);
	}
	for(int i=0;i<sam.size();i++){
		if(sam[i]==' '){
			cout<<' ';
			continue;
		}
		if(se.count(sam[i])){
			se.erase(se.find(sam[i]));
			cout<<sam[i];
		}else{
			break;
		}
	}
	cout<<endl;



	return 0;
}



