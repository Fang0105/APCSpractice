#include<bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	priority_queue <long long,vector<long long>,greater<long long> > pq; //改成數字小的最上面 
  	set<long long> s; //檢查數字是否重複 
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
   	  y=x*m[j];      //計算新的數字  
   	  if (s.count(y)==0) {  //是否曾經產生過，沒有產生時 
     	   s.insert(y);  //將y加入s 
     	   pq.push(y);  //將y加入pq  
      }
   	 }    
  	}






	return 0;
}

