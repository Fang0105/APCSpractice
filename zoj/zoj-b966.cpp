#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	vector<pair<int,int> >ve;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		ve.push_back(make_pair(a,b));
	}
	sort(ve.begin(),ve.end());
	int length = ve[0].second - ve[0].first;
	int left = ve[0].first,right = ve[0].second;
	//cout<<ve[0].first<<" "<<ve[0].second<<" "<<length<<'\n';
	for(int i=1;i<n;i++){
		if(ve[i].first>=left && ve[i].second<=right){
			
		}else if(ve[i].first>=left && ve[i].second>right && ve[i].first<right){
			length += ve[i].second-right;
			right = ve[i].second;
		}else{
			left = ve[i].first;
			right = ve[i].second;
			length += (ve[i].second-ve[i].first);
		}
		//cout<<ve[i].first<<" "<<ve[i].second<<" "<<length<<" "<<left<<" "<<right<<'\n';
	}
	cout<<length<<'\n';




	return 0;
}

