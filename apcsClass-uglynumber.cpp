#include<bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	priority_queue <long long,vector<long long>,greater<long long> > pq; //�令�Ʀr�p���̤W�� 
  	set<long long> s; //�ˬd�Ʀr�O�_���� 
  	int i=0,m[3]={2,3,5};
 	long long x,y;
 	pq.push(1);
	s.insert(1);
  	while (i<1500){
    x=pq.top();
    i++;
    if (i==n) {
      cout <<  x <<endl;
      break;
    }
   	pq.pop();  
   	for(int j=0;j<3;j++){
   	  y=x*m[j];      //�p��s���Ʀr  
   	  if (s.count(y)==0) {  //�O�_���g���͹L�A�S�����ͮ� 
     	   s.insert(y);  //�Ny�[�Js 
     	   pq.push(y);  //�Ny�[�Jpq  
      }
   	 }    
  	}






	return 0;
}

