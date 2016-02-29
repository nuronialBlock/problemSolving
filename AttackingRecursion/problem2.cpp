#include "bits/stdc++.h"

using namespace std;

int ara[10], n;

void rec(int i){
	if(i == (n/2) && n/2 == 0) {return;}
	else if(i == (n/2) + 1 && n/2 != 0) {return;}
	cout << ara[i] << " " << ara[n-1-i] << "\n";
	rec(i+1);
}

int main(){

	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ara[i];
	}
	rec(0);

	return 0;
}