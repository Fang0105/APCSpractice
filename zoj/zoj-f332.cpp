#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n+1];
		for(int i=n;i>=0;i--){
			cin>>arr[i];
		}
		int tem[2*n+1];
		for(int i=0;i<2*n+1;i++){
			tem[i] = 0.0;
		} 
		for(int i=0;i<n+1;i++){
			for(int j=0;j<n+1;j++){
				tem[i+j] += arr[i]*arr[j];
			}
		}
		int a,b;
		cin>>a>>b;
		double v = 0.0;
		for(int i=0;i<2*n+1;i++){
			v += tem[i]*(pow(b,i+1)-pow(a,i+1))/(i+1);
		}
		v *= 2*acos(0.0);
		cout<<fixed<<setprecision(2)<<v<<endl;
	}






	return 0;
}

