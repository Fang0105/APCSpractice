#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	getline(cin,str);
	if(str[0]<='z'&&str[0]>='a'){
		int a = (int)str[0];
		a += 'A' - 'a';
		str[0] = (char)a;
	}
	cout<<" Nice to see you, "<<str<<"!"<<endl;






	return 0;
}

