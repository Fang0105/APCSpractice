#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int f[n];
	bool vis[n] = {false};
	for(int i=0;i<n;i++){
		cin>>f[i];
	}
	int cnt = 0;
	for(int i=0;i<n;i++){
		if(vis[i]==false){
			int goal = i;
			vis[i] = true;
			int end = f[i];
			while(goal!=end){
				vis[end] = true;
				end = f[end];
			}
			cnt++;
		}
	}
	cout<<cnt<<endl;





	return 0;
}

