#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
int n,k;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>k;
	int arr[n];
	fill(arr,arr+n,-1);
	int head = -1;
	int len;
	multiset<int>se;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==0){
			if(head!=-1){
				mp[head] = len;
				se.insert(len);
			}
			head = -1;
			len = 0;
		}else{
			if(head==-1){
				head = i;
				len = 1;
			}else{
				len++;
			}
		}
		arr[i] = head;
	}
	if(head!=-1){
		mp[head] = len;
		se.insert(len);
	}
	int mx = 0,mn = 0;
	mn += *se.begin();
	mx += *prev(se.end());
	while(k--){
		int a;
		cin>>a;
		a--;
		arr[a] = a;
		mp[a] = 1;
		se.insert(mp[a]);
		if(a!=0){
			if(arr[a-1]!=-1){
				se.erase(se.find(mp[arr[a]]));
				arr[a] = arr[a-1];
				se.erase(se.find(mp[arr[a]]));
				mp[arr[a]]++;
				se.insert(mp[arr[a]]);
			}
		}
		if(a!=n-1){
			if(arr[a+1]!=-1){
				se.erase(se.find(mp[arr[a+1]]));
				se.erase(se.find(mp[arr[a]]));
				for(int i=0;i<mp[a+1];i++){
					arr[a+i+1] = arr[a];
					mp[arr[a]]++;
				}
				se.insert(mp[arr[a]]);
			}
		}
		mn += *se.begin();
		mx += *prev(se.end());
	}
	cout<<mx<<endl<<mn<<endl;

	return 0;
}



