#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
struct Man{
	int id;
	int sum;
};
bool comp1(Man x,Man y){
	return x.sum<y.sum;
}
bool comp2(Man x,Man y){
	return x.id<y.id;
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		Man arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].sum;
			arr[i].id = i+1;			
		}
		sort(arr,arr+n,comp1);
		vector<Man>ve;
		int mn = 0;
		for(int i=1;i<n;i++){
			if(arr[mn].sum>=arr[i].sum){
				arr[mn].sum+=arr[i].sum;
			}else{
				arr[i].sum+=arr[mn].sum;
				mn = i;
			}
		}
		sort(arr+mn,arr+n,comp2);
		cout<<n-mn<<endl;
		for(int i=mn;i<n;i++){
			cout<<arr[i].id<<" ";
		}
		cout<<endl;
	}



	return 0;
}



