#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int a;
	cin>>a;
	while(a--){
		int n,k;
		cin>>n>>k;
		int tem = pow(2,n);
		bool arr[tem] = {false};
		int drop;
		int idx = 1;
		for(int i=0;i<k;i++){
			idx = 1;
			int h = 1;
			while(h!=n){
				h++;
				if(arr[idx]==false){
					arr[idx] = true;
					idx = idx*2;
				}else{
					arr[idx] = false;
					idx = idx*2+1;
				}
			}
			drop = idx;
		}
		cout<<idx<<endl;
	}






	return 0;
}

