#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int cn = 1000000009;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[n];
	int sum = 1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(i!=0){
			sum*=(arr[i]-arr[i-1]);
			sum%=cn;
			//cout<<sum<<endl;
		}
	}
	
	if(sum>=0){
		cout<<sum%cn<<endl;
	}else{
		while(sum<0){
			sum+=cn;
		}
		cout<<sum<<endl;
	}
	



	return 0;
}



