#include<bits/stdc++.h>
#define int long long 
#define endl '\n'
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

string str;
int n;
int tot = 0;
int loc = 0;
void cut(int level){
	for(int i=0;i<4;i++){
		if(str[loc]=='2'){
			loc++;
			cut(level/2);
		}else if(str[loc]=='1'){
			loc++;
			tot += level*level;
		}else{
			loc++;
		}
	}	
}

signed main(){
	IOS
	cin>>str>>n;
	cut(n);
	cout<<tot<<endl;




	return 0;
}

