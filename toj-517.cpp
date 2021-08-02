#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	int me = 0,he = 0;
	for(int i=0;i<n;i++){
		if(arr1[i]==arr2[i]){
			me++;
			he++;
		}else{
			if(arr1[i]==0){
				if(arr2[i]==2){
					me+=3;
					he--;
				}else{
					me--;
					he+=3;
				}
			}else if(arr1[i]==2){
				if(arr2[i]==5){
					me+=3;
					he--;
				}else{
					me--;
					he+=3;
				}
			}else{
				if(arr2[i]==0){
					me+=3;
					he--;
				}else{
					me--;
					he+=3;
				}
			}
		}
	}
	cout<<me<<" "<<he<<endl;





	return 0;
}

