#include <bits/stdc++.h>

using namespace std;

int main() {

	int n , a; 

	while(cin >> n >> a){
		int t[109];
		--a;
		for (int i = 0; i < n; ++i) cin >> t[i];

		int idx = 0;
		int right = a + idx;
		int left = a - idx;
		int tot = 0;

		while(left >= 0 || right <= (n-1)){
			int cnt , exist;
			cnt = 0;
			exist = 0; 
			if(left >= 0){
				exist++;
				if(t[left]) cnt++;
			}
			if(right <= (n-1)){
				exist++;
				if(t[right]) cnt++;
			}

			if(left == right && t[left]){
				tot++;
			}
			else if(exist == cnt) tot += cnt;

			idx++;
			right = a + idx;
			left = a - idx;
		}

		cout << tot << "\n";
	}

	return 0;
}