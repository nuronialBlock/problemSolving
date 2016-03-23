#include "bits/stdc++.h"

using namespace std;

int main(){
	int n , k, cnt = 0;
	vector<string> v;
	string s;

	cin >> n >> k;
	cin.ignore();
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cin >> s;
		v.push_back(s);
	}

	for (int i = 0; i < n; ++i)
	{
		int dig = 0;
		for (int j = 0; j < v[i].size(); ++j)
		{
			if(v[i][j] == '4' || v[i][j] == '7') dig++; 
		}
		if(dig <= k) cnt++;
	}

	cout << cnt << "\n";

	return 0;
}