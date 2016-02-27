#include "bits/stdc++.h"

using namespace std;

#define LL long long

LL sum(LL n){ return ((n * (n+1)) / 2);}

int main()
{
	LL n , t;
	cin >> t;
	while(t--){	
		cin >> n;
		n--;
		LL ans = (sum(n/3) * 3) + (sum(n/5) * 5) - (sum(n/15) * 15);
		cout << ans << "\n"; 
	}
	return 0;
}