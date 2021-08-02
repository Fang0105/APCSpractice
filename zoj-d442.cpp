#include<bits/stdc++.h>
using namespace std;

int cal(int a){
	int sum = 0;
	while(a!=0){
		sum += pow(a%10,2);
		a/=10;
	}
	return sum;
}


int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	for(int g=0;g<n;g++){
		int a;
		cin>>a;
		int tem = a;
		set<int>s;
		bool b = false;
		int d = cal(tem);
		while(s.count(tem)==false){
			s.insert(d);
			d = cal(d);
			if(d==1){
				b = true;
				break;
			}else{
				tem = d;
			}
		}
		if(b){
			cout<<"Case #"<<g+1<<": "<<a<<" is a Happy number."<<endl;
		}else{
			cout<<"Case #"<<g+1<<": "<<a<<" is an Unhappy number."<<endl;
		}
	}
	


	return 0;
}

