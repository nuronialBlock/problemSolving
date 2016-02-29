#include "bits/stdc++.h"

using namespace std;

int ara[10], n;

void rec(int i){
	if(i == n) return;
	if(ara[i] % 2) ara[i] = -1;
	rec(i+1);
}

int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ara[i];
	}
	rec(0);

	for(int i = 0 ; i < n ; i++){
		if(ara[i] == -1) continue;
		cout << ara[i] << " ";
	}
	cout << "\n";
	return 0;
}