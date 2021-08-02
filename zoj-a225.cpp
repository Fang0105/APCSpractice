#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int tran(string str){
	int sum = 0;
	for(int i=str.size()-1,j=0;i>=0;i--,j++){
		sum += (str[i]-'0')*pow(10,j);
	}
	return sum;
}
bool comp(string str1,string str2){
	if(str1[str1.size()-1]==str2[str2.size()-1]){
		return tran(str1)>tran(str2);
	}
	return str1[str1.size()-1]-'0'<str2[str2.size()-1]-'0';
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	while(cin>>n){
		string arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n,comp);
		for(int i=0;i<n;i++){
			if(i!=0){
				cout<<" ";
			}
			cout<<arr[i];
		}
		cout<<endl;
	}
	




	return 0;
}

