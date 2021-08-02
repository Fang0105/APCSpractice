#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int num[n];
		for(int i=0;i<n;i++){
			cin>>num[i];
		}
		int times = 0;
		for(int i=n-1;i>0;i--){
			for(int j=0;j<=i-1;j++){
				if(num[j]>num[j+1]){
					times++;
					swap(num[j],num[j+1]);
				}
			}
		}
		cout<<"Minimum exchange operations : "<<times<<'\n';
	}







	return 0;
}

