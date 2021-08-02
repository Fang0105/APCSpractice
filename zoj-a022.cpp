#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string str;
	while(cin>>str){
		bool p = true;
		for(int i=0;i<str.length()/2;i++){
			if(str[i]!=str[str.length()-1-i]){
				p = false;
				break;
			} 
		}
		if(p){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
	}






	return 0;
}

