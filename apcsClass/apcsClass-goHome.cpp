#include<bits/stdc++.h>
#define int long long
using namespace std;

bool isLeap(int n){
	if(n%4==0){
		if(n%100==0&&n%400!=0){
			return false;
		}else{
			return true;
		}
	}else{
		return false;
	}
}

signed main(){
	//ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	int l = 1;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		l = (a*l)/__gcd(l,a);
	}
	string str;
	cin>>str;
	int day = str[9]-'0' + 10*(str[8]-'0');
	int month = str[6]-'0' + 10*(str[5]-'0');
	int year = str[3]-'0' + 10*(str[2]-'0') + 100*(str[1]-'0') + 1000*(str[0]-'0');
	
	
	while(l--){
		day++;
		if((month<=7&&month%2==1)||(month>=8&&month%2==0)){
			if(day==32){
				day = 1;
				month++;
			}	
		}else{
			if(month==2&&isLeap(year)==true){
				if(day==30){
					day = 1;
					month++;
				}
			}else if(month==2&&isLeap(year)==false){
				if(day==29){
					day = 1;
					month++;
				}
			}else{
				if(day==31){
					day = 1;
					month++;
				}
			}
		}
		if(month==13){
			month = 1;
			year++;
		}
	}
	printf("%d/%02d/%02d\n",year,month,day);
	




	return 0;
}

