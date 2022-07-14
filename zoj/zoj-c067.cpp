#include<iostream>
using namespace std;

int main(){
	int n;
	int p = 1;
	while(cin>>n&&n){
		cout<<"Set #"<<p++<<endl;
		int arr[n];
		int tot = 0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			tot += arr[i];
		}
		int avg = tot/n;
		int ans = 0;
		for(int i=0;i<n;i++){
			ans += max(0,arr[i]-avg);
		}
		cout<<"The minimum number of moves is "<<ans<<"."<<endl<<endl;
	}






	return 0;
}

