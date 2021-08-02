#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
ull C[25][25];
ull fun(ull x,ull y){
	if(x==y){
		C[x][y] = 1;
	}else if(x==0){
		C[x][y] = 0;
	}else if(y==0){
		C[x][y] = 1;
	}else{
		if(C[x][y]==0){
			C[x][y] = fun(x-1,y) + fun(x-1,y-1);
		}
	}
	return C[x][y];
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	fun(21,20);
	int n;
	cin>>n;
	int k = 1;
	while(n--){
		string str;
		cin>>str;
		int mp[128] = {0};
		for(int i=0;i<str.length();i++){
			mp[str[i]]++;
		}
		ull arr[str.length()+5];
		arr[0] = 1;
		int len = 0;
		for(int i=(int)'A';i<=(int)'Z';i++){
			if(mp[i]){
				arr[len+mp[i]] = arr[len] * fun(len+mp[i],mp[i]);
				len += mp[i];
			}
		}
		cout<<"Data set "<<k++<<": "<<arr[str.length()]<<endl;
	}






	return 0;
}

