#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
		string str;
		getline(cin,str);
		vector<pair<int,int> >ve;
		int point = 1;
		int cnt = 0;
		bool isLegal = true;
		for(int i=0;i<str.length();i++){
			int w = str[i] - '0';
			if(w == point){
				cnt++;
			}else{
				if(w == 0 || w == 1){
					if(cnt==0){
						cnt++;
						point = w;
						continue;
					}
					ve.push_back(make_pair(point,cnt));
					point = w;
					cnt = 1;
				}else{
					isLegal = false;
					break;
				}
			}
			if(i==str.length()-1){
				ve.push_back(make_pair(point,cnt));
			}
		}
		if(isLegal==false){
			cout<<-1<<'\n';
		}else{
			double len = (double)str.length();
			double num = 0.0;
			for(int i=0;i<ve.size();i++){
				int p = ve[i].second;
				while(p>=7){
					cout<<ve[i].first<<"111 ";
					p-=7;
					num++;
				}
				if(p==1){
					cout<<ve[i].first;
					cout<<"001 ";
					num++;
				}else if(p==2){
					cout<<ve[i].first;
					cout<<"010 ";
					num++;
				}else if(p==3){
					cout<<ve[i].first;
					cout<<"011 ";
					num++;
				}else if(p==4){
					cout<<ve[i].first;
					cout<<"100 ";
					num++;
				}else if(p==5){
					cout<<ve[i].first;
					cout<<"101 ";
					num++;
				}else if(p==6){
					cout<<ve[i].first;
					cout<<"110 ";
					num++;
				}
			}
			int _ans = num*4/len*100;
			double tem = num*4.0/len*100.0 - (double)_ans;
			if(tem>=0.5){
				_ans++;
			}
			cout<<_ans<<"%";
		}
		cout<<endl;
	}
	






	return 0;
}

