#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	int t, ii;
	cin >> t;
	while(t--){
		cin >> ii;
		int coefs[25] , d , k;
		for(int i = 0 ;i <= ii; i++){
			cin >> coefs[i]; 
		}
		int pos = 0;
		cin >> d >> k;
		for(int i = 1 ; ; i++){
			long long v = 0;
			for(int j = 0; j <= ii ; j++){
				v += (coefs[j] * pow(i,j)); 
			}
			pos += d * i;
			if(pos >= k){
				cout << v << "\n";
				break;
			}
		}
	}
	
	return 0;
}