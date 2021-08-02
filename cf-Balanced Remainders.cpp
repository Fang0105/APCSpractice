#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
#define next(X) ((X+1)%3)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		int a[3];
		for(int i=0;i<3;i++){
			a[i] = 0;
		}
		for(int i=0;i<n;i++){
			int q;
			cin>>q;
			a[q%3]++;
		}
		n/=3;
		int tot = 0;
		int i = 0;
		int flag = 0;
		while(flag!=3){
			if(a[i]==n){
				flag++;
			}else if(a[i]>n){
				int dis = a[i]-n;
				a[i] = n;
				tot += dis;
				a[next(i)] += dis;
			}
			i=next(i);
		}
		cout<<tot<<endl;
	}



	return 0;
}



