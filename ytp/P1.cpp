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
	string str;
	int y=0,t=0,p=0;
	while(getline(cin,str)){
		for(int i=0;i<str.size();i++){
			if(str[i]=='Y'||str[i]=='y'){
				y++;
			}else if(str[i]=='T'||str[i]=='t'){
				t++;
			}else if(str[i]=='P'||str[i]=='p'){
				p++;
			}
		}
	}
	//cout<<y<<" "<<t<<" "<<p<<endl;
	cout<<min(y,min(t,p))<<endl;



	return 0;
}



