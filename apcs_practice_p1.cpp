#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	long long n;
	cin>>n;
	long long sum = 0;
	long long f = 0;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		if(a==0){
			f++;
		}else if(a%2==0){
			sum+=a;
		}else{
			sum-=a;
		}
	}
	cout<<sum-5*f<<" "<<sum+6*f<<" "<<(sum+6*f)-(sum-5*f)<<'\n';






	return 0;
}

