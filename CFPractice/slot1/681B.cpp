#include <bits/stdc++.h>

using namespace std;

int main() {

	long long ara[] = {1234567, 123456, 1234};

	long long n; 
	
	cin >> n; 

	bool ans = false; 
	for (int i = 0; i * ara[0] <= n ; ++i) {
		int m = n - (i * ara[0]);
		for (int j = 0; j * ara[1] <= m ; ++j) {
			int o = m - (j * ara[1]);
			if(o % ara[2] == 0){
				ans = true;
				break;
			}
		}
		
	}

	if(ans) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}