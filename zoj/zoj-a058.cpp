#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr[3] = {0,0,0};
	while(n--){
		int k;
		cin>>k;
		arr[k%3]++;
	}
	cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;






	return 0;
}

