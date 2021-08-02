#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[n+1];
	arr[0] = 0;
	for(int i=1;i<=n;i++){
		int a;
		cin>>a;
		if(i==1||i==2){
			arr[i] = a;
		}else{
			arr[i] = arr[i-2]+a;
		}
	}
	int mn;
	if(n%2==0){
		for(int i=0;i<=n;i++){
			if(i==0){
				mn = abs(arr[n-1]);
			}else{
				int j = 0;
				if(i%2==0){
					j += arr[i];
					j += (arr[n-1] - arr[i-1]);
				}else{
					j += arr[i-1];
					j += (arr[n-1] - arr[i]);
				}
				mn = min(mn,abs(j));
			}
		}
	}else{
		for(int i=0;i<=n;i++){
			if(i==0){
				mn = abs(arr[n]);
			}else{
				int j=0;
				if(i%2==0){
					j += arr[i];
					j += (arr[n] - arr[i-1]);
				}else{
					j += arr[i-1]; 
					j += (arr[n] - arr[i]);
				}
				mn = min(mn,abs(j));
			}
		}
	}
	cout<<mn<<endl;
	
	return 0;
}



