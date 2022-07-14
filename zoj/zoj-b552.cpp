#include<iostream>
#include<math.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	string str;
	while(cin>>str){
		int ans = 0;
		long long num = 0;
		long long arrPrime[15];
		for(int i=0;i<str.size();i++){
			num = num*10+(str[i]-'0');
			bool isPrime = true;
			if(num==1 || num==0){
				isPrime = false;
			}
			for(long long j=2;j<=sqrt(num);j++){
				if(num%j==0){
					isPrime = false;
					break;
				}
			}
			if(isPrime==true){
				arrPrime[ans++] = num;
				num = 0;
			}
		}
		cout<<ans<<endl;
		for(int i=0;i<ans;i++){
			cout<<arrPrime[i]<<endl;
		}
		cout<<endl;
	}






	return 0;
}

