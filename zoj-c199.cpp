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
	vector<int>ve;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(ve.size()==0||a!=ve[ve.size()-1]){
			ve.push_back(a);
		}
	}
	int cnt = 0;
	for(int i=1;i<ve.size()-1;i++){
		if(ve[i]>ve[i-1]&&ve[i]>ve[i+1]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	



	return 0;
}



