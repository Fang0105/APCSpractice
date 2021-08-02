#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int arr[505];
	arr[1] = 1;
	for(int i=2;i<=500;i++){
		arr[i] = arr[i-1]+i-1;
	}
	int n;
	while(cin>>n){
		cout<<arr[n]<<endl; 
	}






	return 0;
}

