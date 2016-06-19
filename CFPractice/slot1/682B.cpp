#include <bits/stdc++.h>

using namespace std; 

int main(){

	long long n; 
	vector<long long> v;
	
	v.push_back(0);
	cin >> n;
	while(n--){
		long long kk;
		cin >> kk;
		v.push_back(kk);
	}


	sort(v.begin(), v.end());
	for (int i = 1; i < v.size(); ++i) {
		if(v[i] > i) v[i] = v[i-1] + 1;
	}
	
	cout << v[v.size() - 1] + 1 << "\n";

	return 0;
}