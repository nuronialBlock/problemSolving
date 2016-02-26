#include "bits/stdc++.h"

using namespace std;

int main(){
	ios_base::sync_with_stdio();
	int n;
	int a[1003];
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	multiset<int> ms;
	for(int i = 0 ; i < n ; i++){
		int val;
		cin >> val;
		ms.insert(val);
	}
	int ans = 0;
	multiset<int> :: iterator it;
	for(int i = 0 ; i < n ; i++){
		it = ms.find(a[i]);
		if(it == ms.end()){
			continue;
		}
		else {
			ms.erase(it);
			ans++;
		}
	}
	if(ms.size() == 0) ans--;
	else ans++;

	cout << ans << "\n";

	return 0;
}