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
	int t;
	cin>>t;
	vector<int>ve;
	while(t--){
		int n;
		cin>>n;
		ve.clear();
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			ve.push_back(a);
		}
		sort(ve.begin(),ve.end());
		bool b = false;
		for(int i=0;i<n;i++){
			if(b){
				break;
			}
			for(int j=i+1;j<n;j++){
				if(b){
					break;
				}
				for(int k=j+1;k<n;k++){
					if(ve[i]+ve[j]>ve[k]){
						b = true;
						break;
					}
				}
			}
		}
		if(b){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}



	return 0;
}



