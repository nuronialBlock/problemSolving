#include <bits/stdc++.h>

using namespace std;

int main (){
	int n , m;
	cin >> n >> m;
	bool ri8 = true, lft = false;
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < m; j++){
			if(i % 2 == 0) cout << "#";
			else{
				if(ri8 && j == m-1) {cout << "#";}
				else if(lft && j == 0) {cout << "#";}
				else {
					cout << ".";
				}		
			}
		}
		if(i % 2) {
			ri8 ^= 1;
			lft ^= 1;
		}
		cout << "\n";
	}

	return 0;
}