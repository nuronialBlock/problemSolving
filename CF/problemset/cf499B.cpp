#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	string s;
	map<string,string> dict;

	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		string s1, s2;
		cin.ignore();
		cin >> s1 >> s2;
		if(s1.length() <= s2.length()) dict[s1] = s1;
		else dict[s1] = s2;
	}
	cin.ignore();
	for(int i = 0; i < n; i++){
		cin >> s;
		string ans = dict[s];
		cout << ans;
		if(i != n-1) cout << " ";
		else cout << "\n"; 
	}
	
	return 0;	
}