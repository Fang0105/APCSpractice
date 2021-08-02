#include<bits/stdc++.h>
using namespace std;

int main(){
	int host = 0,guest = 0;
	for(int i=0;i<2;i++){
		int hostScore = 0,guestScore = 0;
		for(int j=0;j<4;j++){
			int h;
			cin>>h;
			hostScore+=h;
		}
		for(int j=0;j<4;j++){
			int h;
			cin>>h;
			guestScore+=h;
		}
		cout<<hostScore<<":"<<guestScore<<'\n';
		if(hostScore>guestScore){
			host++;
		}else{
			guest++;
		}
	}
	if(host==guest){
		cout<<"Tie\n";
	}else if(host>guest){
		cout<<"Win\n";
	}else{
		cout<<"Lose\n";
	}






	return 0;
}

