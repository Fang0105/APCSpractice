#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int sum = 0;
int last;
vector<char>ve;
void check(pair<int,int>p){
	int _0 = (p.first % 10)*9;
	int _1 = p.first/10; 
	int tot = sum + _0 + _1;
	if((10-(tot%10))%10==last){
		ve.push_back((char)p.second);
	}
}
bool comp(char a,char b){
	return a<b;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	map<int,int>mp;
	for(int i=10,j=(int)'A';i<=17;i++,j++){
		mp[i] = j;
	}
	mp[34] = (int)'I';
	for(int i=18,j=(int)'J';i<=22;i++,j++){
		mp[i] = j;
	}
	mp[35] = (int)'O';
	for(int i=23,j=(int)'P';i<=29;i++,j++){
		mp[i] = j;
	}
	mp[32] = (int)'W';
	mp[30] = (int)'X';
	mp[31] = (int)'Y';
	mp[33] = (int)'Z';
	//--------------------------
	string str;
	cin>>str;
	last = str[str.size()-1]-'0';
	for(int i=0,j=8;i<8;i++,j--){
		sum += (str[i]-'0')*j;
	}
	for_each(mp.begin(),mp.end(),check);
	sort(ve.begin(),ve.end(),comp);
	for(char c:ve){
		cout<<c;
	}
	cout<<endl;





	return 0;
}

