#include<bits/stdc++.h>
#define int long long
using namespace std;


int cnt = 0;

void hanoi(int n,char start,char to,char buffer,int m){
	if(n==1){
		cnt++;
		cout<<"ring "<<m<<" : "<<start<<" => "<<to<<endl;
	}else{
		hanoi(n-1,start,buffer,to,m-1);
		hanoi(1,start,to,buffer,m);
		hanoi(n-1,buffer,to,start,m-1);
	}
	
}

void threehanoi(int n,char start,char to,char buffer,int m){
	if(n>3){
		hanoi(n-3,start,to,buffer,m-3);
		threehanoi(3,start,to,buffer,m);
	}else{
		cout<<"ring "<<m-2<<" : "<<start<<" => "<<to<<endl;
		if(m>3){			
			hanoi(m-3,buffer,to,start,m-3);			
		}
		cout<<"ring "<<m-1<<" : "<<start<<" => "<<buffer<<endl;
		if(m>3){
			hanoi(m-3,to,start,buffer,m-3);
		}
		cout<<"ring "<<m-2<<" : "<<to<<" => "<<buffer<<endl;
		if(m>3){
			hanoi(m-3,start,buffer,to,m-3);
		}
		cout<<"ring "<<m<<" : "<<start<<" => "<<to<<endl;
		if(m>3){
			hanoi(m-3,buffer,to,start,m-3);
		}
		cout<<"ring "<<m-2<<" : "<<buffer<<" => "<<start<<endl;
		cnt+=5;
		if(m-3>0){
			threehanoi(3,to,start,buffer,m-3);
		}
	}
}



signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	threehanoi(n,'A','B','C',n);
	cout<<"共需"<<cnt<<"個移動"<<endl;

	





	return 0;
}

