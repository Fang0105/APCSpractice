#include<iostream>
using namespace std;

int main(){
	string str;
	string arr[505];
	int k = 0;
	while(getline(cin,str)){
		bool b = false;
		for(int i=0;i<k;i++){
			if(str==arr[i]){
				b = true;
				break;
			}
		}
		if(b){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
			arr[k++] = str;
		}
	}






	return 0;
}

