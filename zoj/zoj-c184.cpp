#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	while(cin>>n&&n){
		int sum = -n;
		for(int i=1;i<=sqrt(n);i++){
			if(n%i==0){
				sum += (i + n/i);
			}
		}
		if(sum==n){
			cout<<"="<<n<<endl;
		}else{
			int tem = -sum;
			for(int i=1;i<=sqrt(sum);i++){
				if(sum%i==0){
					tem += (i + sum/i);
				}
			}
			if(n==tem){
				cout<<sum<<endl;
			}else{
				cout<<0<<endl;
			}
		}
	}






	return 0;
}

