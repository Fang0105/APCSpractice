#include<bits/stdc++.h>
using namespace std;

int main(){
	int tot = 0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		if(k<0){
		tot+=k;
		}
	}
	cout<<abs(tot)<<endl;
	return 0;
}
