#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int p=1;p<=n;p++){
		int k;
		cin>>k;
		int cnt = 0;
		bool isCover[k];
		string str;
		cin>>str;
		for(int i=0;i<k;i++){
			isCover[i] = false;
		}
		for(int i=0;i<k;i++){
			if(isCover[i]==false){
				if(str[i]=='.'){
					for(int j=0;j<3&&j+i<k;j++){
						isCover[j+i] = true;
					}
					cnt++;
				}else if(str[i]=='#'){
					
				}
			}
		}
		cout<<"Case "<<p<<": "<<cnt<<endl;
	}



	return 0;
}



