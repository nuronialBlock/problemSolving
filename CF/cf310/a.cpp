#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>


int main()
{
	ios_base::sync_with_stdio(0);
	string s;
	int n;
	cin >> n ;
	cin >> s;
	int count = 0 ; 
	for(int i = 0 ; i < s.size()-1 ; i++){
		if(s[i] != s[i+1]){
			count++;
			i++;
		}
	}
	int ncount = 0 ;
	int j = s.size()-1;
	for(int i = 0 ; i < (s.size()/2) ; i++){
		if(s[i] != s[j]){
			ncount++;
		}
	}
	
	count = max(count,ncount);
	
	cout << n - count << endl;
	
	return 0;
}
