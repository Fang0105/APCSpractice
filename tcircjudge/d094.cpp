#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

int step[2000000];
int s[2000000];


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,p,l,r;
	cin>>n>>p>>l>>r;
	for(int i=0;i<n;i++){
		cin>>s[i];
		step[i] = MAX;
	}
	queue<int>qu;
	qu.push(0);
	step[0] = 0;
	while(qu.empty()==false){
		int loc = qu.front();
		qu.pop();
		if(loc==p){
			continue;	
		}
		if(loc-l>=0){
			if(s[loc-l]>=0&&s[loc-l]<n){				
				if(step[loc]+1<step[s[loc-l]]){
					step[s[loc-l]] = min(step[s[loc-l]],step[loc]+1);
					qu.push(s[loc-l]);
				}				
			}
		}
		if(loc+r<n){
			if(s[loc+r]>=0&&s[loc+r]<n){
				if(step[loc]+1<step[s[loc+r]]){
					step[s[loc+r]] = min(step[s[loc+r]],step[loc]+1);					
					qu.push(s[loc+r]);
				}
			}
		}
	}	
	if(step[p]==MAX){
		cout<<-1<<endl;
	}else{
		cout<<step[p]<<endl;
	}


	return 0;
}



