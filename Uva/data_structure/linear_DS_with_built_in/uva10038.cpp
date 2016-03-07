#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int  n;

	while(cin >> n){
		int ara[3003];
		bool jolly = true, flag[3003];

		memset(flag,0,sizeof flag);
		for(int i = 0; i < n ; i++){
			cin >> ara[i];
			if(i == 0) continue;
			int val = abs(ara[i] - ara[i-1]);
			flag[val] = true;
		}

		for(int i = 1; i <= n-1; i++){
			if(!flag[i]){
				jolly = false;
				break;
			}
		}

		if(jolly) cout << "Jolly\n";
		else cout << "Not jolly\n";
	}

	return 0;
}