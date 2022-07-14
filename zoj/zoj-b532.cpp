#include<iostream>
using namespace std;

int main(){
	int p;
	cin>>p;
	while(p--){
		string str;
		cin>>str;
		int a=0,b=0;
		char c = '@';
		for(int i=0;i<str.size();i++){
			if(str[i]-'0'>=0&&str[i]-'0'<=9){
				if(c=='@'){
					a = a*10+(str[i]-'0');
				}else{
					b = b*10+(str[i]-'0');
				}
			}else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%'){
				c = str[i];
			}
		}
		if(c=='+'){
			cout<<a+b<<endl;
		}else if(c=='-'){
			cout<<a-b<<endl;
		}else if(c=='*'){
			cout<<a*b<<endl;
		}else if(c=='/'){
			cout<<a/b<<endl;
		}else{
			cout<<a%b<<endl;
		}
	}






	return 0;
}

