#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
//int arr[100000000+2];
bool fun(int a){
	if(a==1){
		return false;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	for(int i=2;i<100000000;i++){
//		if(arr[i]==1){
//			continue;
//		}
//		for(int j=i+i;j<100000000;j+=i){
//			arr[j] = 1;
//		}
//	}
	int a,b;		
	while(cin>>a>>b){
		int cnt = 0;
		for(int i=a;i<=b;i++){
			if(fun(i)){
				cnt++;
			}
		}
		cout<<cnt<<endl; 
	}


	




	return 0;
}

