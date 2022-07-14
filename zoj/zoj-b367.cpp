#include<iostream>
using namespace std;

int main(){
	int p;
	cin>>p;
	while(p--){
		int n,m;
		cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		bool b = true;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				b = (arr[i][j]==arr[n-i-1][m-j-1])&&b;
			}
		}
		if(b){
			cout<<"go forward"<<endl;
		}else{
			cout<<"keep defending"<<endl;
		}
	}






	return 0;
}

