#include "bits/stdc++.h"

using namespace std;

int ara[10];

int main(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> ara[i];
	}

	for(int i = 0 ; i < n ; i++)
		cout << ara[i] << " ";

	cout <<"\n";
	return 0;
}
