#include <bits/stdc++.h>

using namespace std;

int main(){

	int N;
	cin >> N;
	while(N--){

		double val = 100000;
		double usd2eur, eur2gbp, gbp2usd; 
		double usd, eur, gbp; 

		cin >> usd2eur >> eur2gbp >> gbp2usd;

		eur = val / usd2eur;
		gbp = eur / eur2gbp;
		usd = gbp / gbp2usd;

		if(usd > val ) printf("%d\n", int(usd - val));
		else cout << 0 << "\n"; 
	}

	return 0;
}