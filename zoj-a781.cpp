#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n&&n){
		bool b = true;
		for(int i=1;i<=n*8;i++){
			if(b==true){
				cout<<string(n,'#')<<string(n,'.')<<string(n,'#')<<string(n,'.')<<string(n,'#')<<string(n,'.')<<string(n,'#')<<string(n,'.')<<endl;
			}else{
				cout<<string(n,'.')<<string(n,'#')<<string(n,'.')<<string(n,'#')<<string(n,'.')<<string(n,'#')<<string(n,'.')<<string(n,'#')<<endl;
			}
			if(i%n==0){
				b = !b;
			}
		}
		cout<<endl;
	}



	return 0;
}



