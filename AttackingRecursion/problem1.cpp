#include "bits/stdc++.h"

using namespace std;

int ara[10];

void rec(int n){
	if(n == 0) { cout << "\n"; return;}
	cout << ara[n-1] << " ";
	rec(n-1);
}

int main(){

	int n;
	cin >> n;
	for(int i = 0; i < n ; i++){
		cin >> ara[i];
	}
	rec(n);
	return 0;
}