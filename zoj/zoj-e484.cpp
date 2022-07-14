#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	bool b = true;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			b = false;
		}
	}
	if(b){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}






	return 0;
}

