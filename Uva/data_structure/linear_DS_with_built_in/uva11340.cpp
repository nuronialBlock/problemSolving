#include "bits/stdc++.h"

using namespace std;

int main(){

	int n;

	cin >> n;
	while(n--){
		int price[256], k, m;
		unsigned long long total; 

		memset(price,0,sizeof price);
		cin >> k;
		cin.ignore();

		for(int i = 0; i < k ; i++){
			unsigned char ch;
			int p;

			cin >> ch >> p;
			cin.ignore();
			price[int(ch)] = p; 
		}

		cin >> m;
		cin.ignore();

		total = 0;
		for(int i = 0 ; i < m; i++){
			unsigned char ch;
			while((ch = cin.get()) != '\n'){
				total += price[(int)ch]; 
			}
		}

		printf("%0.2lf$\n", total / 100.0);
	}

	return 0;
}