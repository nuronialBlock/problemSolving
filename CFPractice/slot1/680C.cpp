#include <bits/stdc++.h>

using namespace std;

#define pb push_back

vector<int> v;

void makePrimes(){
	v.pb(2);
	for (int i = 3; i <= 49; i += 2){
		bool isPrime = true;
		for (int j = 2; j * j <= i; ++j){
			if(i % j == 0){
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			v.pb(i);
		}
	}
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
			num = v[i];
			cnt++;
		}
	}

	if(cnt == 0){
		cout << "prime\n";
		fflush(stdout);
	} else if (cnt == 1){
		int n = num * num;
		if(n > 100){
			cout << "prime\n";
			fflush(stdout);
		} else {
			cout << n << "\n";
			fflush(stdout);

			cin >> s;
			if (s == "yes") {
				cout << "composite\n";
				fflush(stdout);
			} else {
				cout << "prime\n";
				fflush(stdout);
			}
		}
	} else {
		cout << "composite\n";
		fflush(stdout);
	}


	return 0;
}