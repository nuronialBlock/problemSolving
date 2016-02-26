#include <bits/stdc++.h>

using namespace std;

int main(){
	int n , m;
	cin >> n  >> m;

	for(int i = n + 1 ; i <= m ; i++){
		cout << "Result of ORing between " << n << " " << i << " ";
		n |= i;
		cout << ":: " << n << "\n"; 
	}

	return 0;
}