#include<iostream>
using namespace std;

int main(){
	long long n;
	while(cin>>n){
		n/=2;
		long long mx = 0;
		for(long long i=1;i<=n/2;i++){
			mx = max(mx,i*(n-i));
		}
		cout<<mx<<endl;
	}






	return 0;
}

