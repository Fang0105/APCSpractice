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
	int n;
	cin>>n;
	while(n--){
		int a;
		cin>>a;
		for(int i=0;i<a;i++){
			cout<<string(a-i-1,' ');
			for(int j=0;j<i+1;j++){
				cout<<(char)('A'+a-j-1);
			}
			for(int j=0;j<i;j++){
				cout<<(char)('A'+a-i+j);
			}
			cout<<endl;
		}
		for(int i=1;i<a;i++){
			cout<<string(i,' ');
			for(int j=0;j<a-i;j++){
				cout<<(char)('A'+a-1-j);
			}
			for(int j=0;j<a-i-1;j++){
				cout<<(char)('A'+i+j+1);
			}
			cout<<endl;
		}
	}



	return 0;
}



