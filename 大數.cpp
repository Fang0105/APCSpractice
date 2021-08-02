#include<bits/stdc++.h>
using namespace std;

string addString(string str1,string str2){
	long long len1 = str1.length();
	long long len2 = str2.length();
	long long k = abs(len1-len2);
	bool p = len1>len2;
	if(p){
		for(long long i=0;i<k;i++){
			str2 = "0" + str2;
		}
	}else{
		for(long long i=0;i<k;i++){
			str1 = "0" + str1;
		}
	}
	long long len = str1.length();
	string answer = "";
	long long toNext = 0;
	for(long long i=len-1;i>=0;i--){
		long long h = (str1[i]-'0') + (str2[i]-'0') + toNext;
		if(h>=10){
			h-=10;
			toNext = 1;
		}else{
			toNext = 0;
		}
		long long j = h + '0';
		answer = (char)j + answer;	
	}
	if(toNext == 1){
		answer = '1' + answer;
	}
	return answer;
}

int main(){
	string str1,str2;
	cin>>str1>>str2;
    cout<<addString(str1,str2)<<'\n'; 
	


	return 0;
}

