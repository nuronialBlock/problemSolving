#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>


int main()
{
	ios_base::sync_with_stdio(0);
	
	string s;
	
	int n , m ;
	vector<string> vs;
	map<string,int> ms;
	cin >> n;
	for(int i = 0 ; i < n ; i++){
		//for(int j = 0; j < n ; j++){
			cin >> s;
			ms[s]++;
			if(ms[s] == 1) vs.push_back(s);
		//}
	}
	int high = 0 ;
	for(int i =0 ; i < vs.size() ; i++){
		high = max(high,ms[vs[i]]);
	}	
	
	cout << high << endl;
	
	return 0;
}
