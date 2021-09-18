#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,m;
struct Atk{
	int tm,loc;
};
bool comp(Atk a1,Atk a2){
	return a1.tm<a2.tm;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	Atk atk[n];
	int stat[m];
	fill(stat,stat+m,MAX);
	for(int i=0;i<n;i++){
		cin>>atk[i].loc>>atk[i].tm;
		atk[i].loc--;
	}
	sort(atk,atk+n,comp);
	for(int i=0;i<n;i++){
		int init = atk[i].loc;
		int t = atk[i].tm;
		for(int j=init,k=0;j>=0;j--,k++){
			stat[j] = min(stat[j],t+k);
		}
		for(int j=init,k=0;j<m;j++,k++){
			stat[j] = min(stat[j],t+k);
		}
	}
	for(int i=0;i<m;i++){
		if(i!=0){
			cout<<" ";
		}
		cout<<stat[i];
	}
	cout<<endl;
	



	return 0;
}



