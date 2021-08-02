#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int c,s,q;
	int p = 1;
	while(cin>>c>>s>>q&&(c||s||q)){
		if(p!=1){
			cout<<endl;
		}
		int graph[c+1][c+1];
		for(int i=1;i<=c;i++){
			for(int j=1;j<=c;j++){
				graph[i][j] = MAX;
			}
			graph[i][i] = 0;
		}
		for(int i=0;i<s;i++){
			int a,b,l;
			cin>>a>>b>>l;
			graph[a][b] = l;
			graph[b][a] = l;
		}
		for(int k=1;k<=c;k++){
			for(int i=1;i<=c;i++){
				for(int j=1;j<=c;j++){
					if(graph[i][k]!=MAX && graph[k][j]!=MAX ){
						graph[i][j] = min(graph[i][j],max(graph[i][k],graph[k][j])); 
					}
				}
			}
		}
//		for(int i=0;i<c;i++){
//			for(int j =0;j<c;j++){
//				cout<<graph[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<"Case #"<<p++<<endl;
		for(int i=0;i<q;i++){
			int a,b;
			cin>>a>>b;
			if(graph[a][b]==MAX){
				cout<<"no path";
			}else{
				cout<<graph[a][b];
			}
			cout<<endl;
		}
		
	}



	return 0;
}



