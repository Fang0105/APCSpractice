#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
int a1[1000005];
int a2[1000005];
signed main(){
    int n;
    cin>>n;  
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    int idx = 0;
    int cnt = 0;
    for(int i:a1) {
        if(idx>=n){
            break;
        }
		while(idx<n) {
			if(a2[idx]<=i) {
				idx++;
			}else {
				cnt++;
				idx++;
				break;
			}
		}
	}
    cout<<cnt<<endl;


    return 0;
}