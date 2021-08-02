#include<bits/stdc++.h>
//#define int long long
#define endl '\n'
#define int unsigned long long
#define IL(X) ((X)*2+1)
#define IR(X) ((X)*2+1)
#define pow(X) (((X)*(X))*(X))
using namespace std;
int MAX = LONG_MAX;
int MIN = LONG_MIN;
bool bs(int goal){
    int low = 1;
    int high = 10000;
    while (low <= high){
        int mid = (low + high) / 2;
        if (pow(mid) == goal){
            return true;
        }
        else if (pow(mid) > goal){
            high = mid - 1;
        }
        else if (pow(mid) < goal){
            low = mid + 1;
        }
    }
    return false;
}

signed main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int r;
	cin>>r;
	while(r--){
		int n;
		cin>>n;
		bool yes = false;
		for(int i=1;i<=10000;i++){
			int k = n-pow(i);
			if(bs(k)==true){
				yes = true;
				break;
			}
		}
		if(yes==true){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}



	return 0;
}



