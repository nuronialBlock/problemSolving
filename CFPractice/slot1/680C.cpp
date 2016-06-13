#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<int> v;
int isPrime[50];

void makePrimes(){
	memset(isPrime, 1, sizeof isPrime);

	v.pb(2);
	for (int i = 3; i <= 49; i += 2){
		for (int j = 2; j * j <= i; ++j){
			if(i % j == 0){
				isPrime[i] = false;
				break;
			}
		}
		if (isPrime[i]) {
			v.pb(i);
		}
	}
	v.pb(4);
	v.pb(9);
	v.pb(25);
	v.pb(49);
}

int main() {

	makePrimes();

	int size = v.size();
	int cnt = 0;
	int num = 0; 
	string s; 
	for (int i = 0; i < size; ++i){
		cout << v[i] << "\n";
		fflush(stdout);
		
		cin >> s;
		if(s == "yes") {
			cnt++;
		}
	}

	if(cnt == 0 || cnt == 1){
		cout << "prime\n";
		fflush(stdout);
	} else {
		cout << "composite\n";
		fflush(stdout);
	}


	return 0;
}