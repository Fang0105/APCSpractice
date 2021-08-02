#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	cin.ignore();
	string arr[n];
	for(int i=0;i<n;i++){
		getline(cin,arr[i]);
	}
	for(int i=0;i<n;i++){
		if(i!=0){
			cout<<" ";
		}
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		string str = arr[i];
		for(int j=0;j<a;j++){
			cout<<str[j];
		}
		for(int j=b;j>=a;j--){
			cout<<str[j];
		}
		for(int j=b+1;j<arr[i].size();j++){
			cout<<str[j];
		}
		
	}
	cout<<"."<<endl;






	return 0;
}

