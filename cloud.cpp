#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m;
	cin>>n>>m;
	long long cloud[n];
	long long sum = 0;
	for(long long i=0;i<n;i++){
		long long c;
		cin>>c;
		sum+=c;
		cloud[i] = sum;
	}
	for(long long i = 0;i<m;i++){
			long long a,b;
			cin>>a>>b;
			if(a>b){
				swap(a,b);
			}
			if(a!=0){
				cout<<cloud[b]-cloud[a-1]<<'\n';
			}else{
				cout<<cloud[b]<<'\n';
			}
	}

	return 0;
}

