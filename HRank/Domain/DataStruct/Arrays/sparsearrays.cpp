#include <bits/stdc++.h>

using namespace std;

int main () {
	int N, Q;
	cin >> N;
	map<string, int> mapped;
	while(N--){
		string s;
		cin >> s;
		mapped[s]++;
	}

	cin >> Q;
	while(Q--){
		string s;
		cin >> s;
		cout << mapped[s] << "\n";
	}

	return 0;
} 