#include<iostream>
using namespace std;

int main(){
	long long a,b;
	while(cin>>a>>b){
		int tot = a;
		int cnt = 0;
		while(tot<=b){
			cnt++;
			tot += a+cnt;
		}
		cout<<cnt+1<<endl;
	} 
	 






	return 0;
}

