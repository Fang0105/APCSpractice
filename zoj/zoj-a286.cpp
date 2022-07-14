#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	while(cin>>a>>b>>c){
		int special = 0;
		while(a!=0){
			special += a%10;
			a/=10;
		}
		while(b!=0){
			special += b%10;
			b/=10;
		}
		while(c!=0){
			special += c%10;
			c/=10;
		}
		while(special>9){
			int tem = 0;
			while(special!=0){
				tem += special%10;
				special/=10;
			}
			special = tem;
		}
		int n;
		cin>>n;
		int arr[n];
		int ans = 0;
		int i=0;
		while(n--){
			int aa,bb,cc;
			cin>>aa>>bb>>cc;
			int sspecial = 0;
			while(aa!=0){
				sspecial += aa%10;
				aa/=10;
			}
			while(bb!=0){
				sspecial += bb%10;
				bb/=10;
			}
			while(cc!=0){
				sspecial += cc%10;
				cc/=10;
			}
			while(sspecial>9){
				int tem = 0;
				while(sspecial!=0){
					tem += sspecial%10;
					sspecial/=10;
				}
				sspecial = tem;
			}
			arr[i] = abs(special-sspecial);
			if(arr[i]<arr[ans]){
				ans = i;
			}
			i++;
		}
		cout<<ans+1<<endl;
	}






	return 0;
}

