#include<bits/stdc++.h>
using namespace std;

int arr[11][11];
int tem[11][11];
void turnLeft(int n,int m){
	memcpy(tem,arr,sizeof(tem));
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			arr[i][j] = tem[j][m-i-1];
		}
	}
}
void reverseArr(int n,int m){
	for(int i=0;i<(int)(n/2);i++){
		for(int j=0;j<m;j++){
			swap(arr[i][j],arr[n-i-1][j]);
		}
	}
}

int main(){
	int n,m;
	while(cin>>n>>m){
		memset(arr,0,sizeof(arr));
		//memset(tem,0,sizeof(tem));
		int count;
		cin>>count;
		stack<int>st;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
			}
		}
		for(int i=0;i<count;i++){
			int l;
			cin>>l;
			st.push(l);
		}
		for(int i=0;i<count;i++){
			if(st.top()==1){
				reverseArr(n,m);
			}else{
				turnLeft(n,m);
				swap(n,m);
			}
			st.pop();
		}
		cout<<n<<" "<<m<<'\n';
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==0){
					cout<<arr[i][j];
				}else{
					cout<<" "<<arr[i][j];
				}
			}
			cout<<'\n';
		}
	}
	




	return 0;
}

