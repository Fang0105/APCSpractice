#include<bits/stdc++.h>
using namespace std;

int arr[100][100];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		for(int i=0,k=0;i<n;i++,k++){
			for(int j=0,p=0;j<m;j++,p++){
				cin>>arr[p][k];
			}
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(j==0){
					cout<<arr[i][j];
				}else{
					cout<<" "<<arr[i][j];
				}
			}
			cout<<'\n';
		}
	}
	





	return 0;
}

