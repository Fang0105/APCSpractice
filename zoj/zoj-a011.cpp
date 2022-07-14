#include<iostream>
using namespace std;

int main(){
	string str;
	while(getline(cin,str)){
		int tot = 0;
		for(int i=1;i<str.size();i++){
			if(!( (str[i]<='z'&&str[i]>='a') || (str[i]<='Z'&&str[i]>='A') ) && ((str[i-1]<='z'&&str[i-1]>='a')||(str[i-1]<='Z'&&str[i-1]>='A'))){
				tot++;
			}
			if(i==str.size()-1 && ((str[i]<='z'&&str[i]>='a') || (str[i]<='Z'&&str[i]>='A'))){
				tot++;
			}
		} 
		cout<<tot<<endl;
	}






	return 0;
}

