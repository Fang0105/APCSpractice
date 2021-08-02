#include<bits/stdc++.h>
#define int long long
#define endl '\n'
#define ull unsigned long long
using namespace std;
struct Cat{
	int age,pos;
	string name,spos;
};
int fun(string str){
	if(str=="elder"){
		return 8;
	}else if(str=="nursy"){
		return 7;
	}else if(str=="kit"){
		return 6;
	}else if(str=="warrior"){
		return 5;
	}else if(str=="appentice"){
		return 4;
	}else if(str=="medicent"){
		return 3;
	}else if(str=="deputy"){
		return 2;
	}else if(str=="leader"){
		return 1;
	}
	return 0;
}
bool comp(Cat c1,Cat c2){
	if(c1.pos==c2.pos){
		if(c1.pos==4){
			if(c1.age==c2.age){
				return c1.name<c2.name;
			}else{
				return c1.age<c2.age;
			}
		}else{
			if(c1.age==c2.age){
				return c1.name<c2.name;
			}else{
				return c1.age>c2.age;
			}
		}
	}else{
		return c1.pos>c2.pos;
	}
}
signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	while(cin>>n>>m){
		Cat cat[n];
		for(int i=0;i<n;i++){
			cin>>cat[i].name>>cat[i].spos;
			cat[i].pos = fun(cat[i].spos);
			cin>>cat[i].age;
		}
		sort(cat,cat+n,comp);
		for(int i=0;i<min(n,m);i++){
			cout<<cat[i].name<<endl;
		}
	}
	

	return 0;
}



