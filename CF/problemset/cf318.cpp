#include <bits/stdc++.h>

using namespace std;

#define LL long long

int main (){

	LL n, k, lastIndx;
	cin >> n >> k;

	if(k == 1) {cout << "1\n"; return 0;}
	if(n % 2) lastIndx = n;
	else lastIndx = n - 1;

	lastIndx = (n + 1) / 2;

	LL ans = 0;
	if(k <= lastIndx) ans = (k * 2) - 1;
	else {
		LL idx = (k - lastIndx);
		ans = (idx * 2); 
	} 

	cout << ans << "\n";

	return 0;
}