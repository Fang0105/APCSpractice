#include<iostream>
using namespace std;

int main(){
	string str;
	while(cin>>str){
		int arr[30];
		for(int i=0;i<30;i++){
			arr[i] = 0;
		}
		for(int i=0;i<str.size();i++){
			if((int)str[i]>=(int)'a'&&(int)str[i]<=(int)'z'){
				arr[(int)str[i]-(int)'a']++;
			}else if((int)str[i]>=(int)'A'&&(int)str[i]<=(int)'Z'){
				arr[(int)str[i]-(int)'A']++;
			}
		}
		int tem = 0;
		for(int i=0;i<26;i++){
			tem += arr[i]%2;
		}
		if(tem<=1){
			cout<<"yes !"<<endl;
		}else{
			cout<<"no..."<<endl;
		}
	}






	return 0;
}

