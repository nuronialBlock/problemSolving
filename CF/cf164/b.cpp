#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int ans, i, n;

	cin >> n;

	ans = n;
	for(int i = 1 ; i < n; i++){
		ans += ((n - i) * i); // i = mistake cost 
	}

	cout << ans << "\n";

	return 0;
}