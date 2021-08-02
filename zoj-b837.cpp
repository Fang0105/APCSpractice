#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+2)
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;


signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int p=0;p<n;p++){
		int s,e;
		cin>>s>>e;
		if(s>e){
			swap(s,e);
		}
		int a=0,b=1;
		int cnt = 0;
		if(a>=s&&a<=e){
			cout<<a<<endl;
			cnt++;
		}
		
		while(b<=e){
			if(b<s){
				int tem = a;
				a = b;
				b = b + tem;
			}else{
				cout<<b<<endl;
				int tem = a;
				a = b;
				b = b + tem;
				cnt++;
			}
		}
		cout<<cnt<<endl;
		if(p!=n-1){
			cout<<"------"<<endl;
		}
	}
	
	
	
	
	
	
	
	



	return 0;
}



