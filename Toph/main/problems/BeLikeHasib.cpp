#include "bits/stdc++.h"

using namespace std;

int main(){

	long long n , x , hi , lo , mid;
	cin >> n >> x;
	hi = n ; lo = 1;
	int cnt = 0;
	while(lo < hi){
		cnt++;
		mid = (hi + lo) / 2;
		if(x > mid){
			lo = mid + 1;
		} else{
			hi = mid;
		}
	}
	cout << cnt << "\n";
	return 0;
}