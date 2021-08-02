#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	int i = 1;
	int arr[10000] = {0};
	int h;
	int mx = 0;
	while(cin>>n){
		i = 1;
		h = 1;
		while(arr[i]!=0){
			if(n>arr[i]){
				i = 2*i+1;
			}else{
				i = 2*i;
			}
			h++;
		}
		arr[i] = n;
		mx = max(mx,h);
	}
	cout<<mx<<endl;





	return 0;
}

