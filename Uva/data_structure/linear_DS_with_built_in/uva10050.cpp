#include <bits/stdc++.h>

using namespace std;

int main()
{
	int kase;
	cin >> kase;
	for(int k = 0; k < kase ; k++){
		bool hartal[3999];
		int n, p, m;

		cin >> n >> m ;
		memset(hartal,0,sizeof hartal);
		for(int j = 0; j < m ; j++){
			cin >> p;
			int i = p;
			for( ; i <= n; i += p){
				if(i % 7 == 6 || i % 7 == 0) continue;
				hartal[i] = true;
			}
		}

		int cnt = 0;
		for(int i = 1; i <= n ; i++){
			if(hartal[i]) cnt++;
		}

		cout << cnt << "\n";

	}

	return 0;
}