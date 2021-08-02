#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

bool comp(string v1,string v2){
	if(v1[0]==v2[0]){
		if(v1[v1.size()-1]==v2[v2.size()-1]){
			return v1.size()<v2.size();
		}else{
			return v1[v1.size()-1]<v2[v2.size()-1];
		}
	}else{
		return v1[0]<v2[0];
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	vector<string>ve;
	string voc;
	while(cin>>voc){
		ve.push_back(voc);
	}
	sort(ve.begin(),ve.end(),comp);
	cout<<"-----------------------------------------------\n";
	ve.insert(ve.begin()+0,"+");
	for(int i=1;i<ve.size();i++){
		if(ve[i][0]!=ve[i-1][0]){
			cout<<endl<<(char)(ve[i][0]-('a'-'A'))<<'-'<<endl;
		}
		cout<<ve[i]<<endl;
	}


	return 0;
}



