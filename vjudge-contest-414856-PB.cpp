#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
string ori,pro;
int n;
int cvo(int s,int e){
	int d = e-s;
	int cnt = 0;
	for(int i=s;i<=e;i++){
		int h = ori[i]-'0';
		cnt += h*pow(10,d);
		d--;
	}
	return cnt;
}
int cvp(int s,int e){
	int d = e-s;
	int cnt = 0;
	for(int i=s;i<=e;i++){
		int h = pro[i]-'0';
		cnt += h*pow(10,d);
		d--;
	}
	return cnt;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
	cin>>ori>>n>>pro;
	map<char,int>mp;
	map<char,int>mp2;
	for(int i=0;i<26;i++){
		mp[(char)('A'+i)] = 0;
		mp2[(char)('A'+i)] = 0;
	}
	for(int i=0;i<ori.size();i++){
		if(ori[i]<='Z'&&ori[i]>='A'){
			if(i==ori.size()-1){
				mp[ori[i]]+=n;
			}else{
				if(ori[i+1]<='Z'&&ori[i+1]>='A'){
					mp[ori[i]]+=n;
				}else{
					int j = i+1;
					while(j<ori.size()&&ori[j]<='9'&&ori[j]>='0'){
						j++;
					}
					mp[ori[i]]+=(cvo(i+1,j-1)*n);
				}
			}
		}
	}
	for(int i=0;i<pro.size();i++){
		if(pro[i]<='Z'&&pro[i]>='A'){
			if(i==pro.size()-1){
				mp2[pro[i]]++;
			}else{
				if(pro[i+1]<='Z'&&pro[i+1]>='A'){
					mp2[pro[i]]++;
				}else{
					int j = i+1;
					while(j<pro.size()&&pro[j]<='9'&&pro[j]>='0'){
						j++;
					}
					mp2[pro[i]]+=((cvp(i+1,j-1)));
				}
			}
		}
	}
	int mn = MAX;
	for(pair<char,int>p:mp2){
		if(p.second==0){
			continue;
		}
		mn = min(mn,mp[p.first]/p.second);
	}
	cout<<mn<<endl;
//	for(pair<char,int>p:mp){
//		cout<<p.first<<" "<<p.second<<endl;
//	}
//	cout<<"---------------------\n";
//	for(pair<char,int>p:mp2){
//		cout<<p.first<<" "<<p.second<<endl;
//	}	
	return 0;
}



