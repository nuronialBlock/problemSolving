#include <bits/stdc++.h>

using namespace std; 

int main(){

	long long n; 
	vector<long long> v;

	cin >> n;
	while(n--){
		long long kk;
		cin >> kk;
		v.push_back(kk);
	}

	sort(v.begin(), v.end());
	
	long long cnt = 1;
	for (int i = 0; i < v.size(); ++i) {
		if(v[i] >= cnt) {
			v[i] = cnt;
			cnt++;
		}
	}
	
	cout << v[v.size() - 1] + 1 << "\n";

	return 0;
}