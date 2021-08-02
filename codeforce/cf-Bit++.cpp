#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int val = 0;
	while(n--){
		string str;
		cin>>str;
		if(str=="X++"||str=="++X"){
			val++;
		}else{
			val--;
		}
	}
	cout<<val<<endl;


	return 0;
}



