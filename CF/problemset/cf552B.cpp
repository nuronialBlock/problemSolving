#include "bits/stdc++.h"

using namespace std;

#define LL long long

int main()
{
	LL n, hiVal[15], totDigit[15];
	hiVal[0] = 0;
	for(int i = 1; i < 11; i++){
		hiVal[i] = (hiVal[i-1] * 10 ) + 9;
		if(i < 10){
			totDigit[i] = (hiVal[i] - hiVal[i-1]) * i;
		} 
	}

	cin >> n;

	if(n <= 9){
		cout << n << "\n";
		return 0;
	}

	int idx = 0 ;
	for(int i = 1 ; i < 11; i++){
		if(hiVal[i] > n){
			idx = i-1;
			break;
		}
	}
	LL xtra = n - hiVal[idx];
	LL ans = xtra * (idx + 1) ;
	for(int i = 1; i <= idx; i++){
		ans += totDigit[i];
	}

	cout << ans << "\n";
	return 0;
}