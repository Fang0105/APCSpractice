#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n+1];
	for(int i=0;i<n+1;i++){
		arr[i] = 0;
	}
	while(m--){
		int a;
		cin>>a;
		arr[a]++;
	}
	int cnt = 0;
	for(int i=1;i<n+1;i++){
		if(arr[i]!=2){
			cnt++;
		}
	}
	cout<<cnt<<endl;






	return 0;
}

