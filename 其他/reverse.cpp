#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=m-1;i>=0;i--){
		for(int j=0;j<n;j++){
			cin>>a[j][i]; 
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(j==0){
				cout<<a[i][j];
			}else{
				cout<<" "<<a[i][j];
			}
		}
		cout<<'\n';
	}





	return 0;
}

