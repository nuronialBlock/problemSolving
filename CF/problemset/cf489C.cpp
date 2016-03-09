#include "bits/stdc++.h"

using namespace std;

bool can(int len , int sum){
	if(sum > (len * 9) || sum < 0) return false;
	return true;
}

void mini(int len, int sum){
	for(int i = 1; i <= len; i++){
		for(int j = 0; j <= 9; j++){
			if(j == 0 && i == 1) continue;
			if(can(len - i, sum - j)){
				cout << j;
				sum -= j;
				break;
			}
		}
	}
}


void maxi(int len, int sum){
	for(int i = 1; i <= len; i++){
		for(int j = 9; j >= 0; j--){
			if(can(len - i, sum - j)){
				cout << j;
				sum -= j;
				break;
			}
		}
	}
}

int main()
{
	ios :: sync_with_stdio(false);
	int len, sum;

	while(cin >> len >> sum){
		if(len == 1 && sum == 0){
			cout << "0 0\n"; 
			continue;
		}
		if(sum == 0){
			cout << "-1 -1\n";
			continue;
		}
		if(!can(len,sum)){
			cout << "-1 -1\n";
			continue;
		}
		mini(len, sum); cout << " ";
		maxi(len, sum); cout << "\n";
	}

	return 0;
}