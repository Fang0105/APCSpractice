#include<iostream>
using namespace std;

int main(){
	int n,m;
	while(cin>>n>>m&&(n||m)){
		string str = "";
		string tem;
		for(int i=0;i<n;i++){
			cin>>tem;
			str+=tem;
		}
		for(int i=0;i<m;i++){
			int k;
			cin>>k;
			k-=1;
			cout<<str[k];
		}
		cout<<endl;
	}






	return 0;
}

