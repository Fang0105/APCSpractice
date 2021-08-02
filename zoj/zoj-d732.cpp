#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,q;
	cin>>n>>q;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(q--){
		int goal;
		cin>>goal;
		int location = 0;
		int left = 1;
		int right = n;
		while(left<=right){
			int mid = (left + right) / 2;
			if(a[mid]==goal){
				location = mid;
				break;
			}else if(a[mid]<goal){
				left = mid+1;
			}else if(a[mid]>goal){
			 	right = mid-1; 
			} 
		}
		cout<<location<<'\n';
	}







	return 0;
}

