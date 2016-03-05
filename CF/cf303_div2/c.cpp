#include <bits/stdc++.h>

using namespace std;
#define LL long long
#define vi vector<int>
#define vLL vector<LL>
#define pii pair<int,int>

int main()
{
	int tc ;
	vi v;
	cin >> tc ;
	
	for(int i = 0; i <  tc;  i++){
		int num ;
		cin >> num ;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	
	int count = 0 ;
	long long int tot = 0 ;
	for(int i = 0; i < tc ; i++){
		if(tot <= v[i]){
			 count++;
			 tot += v[i];
		}
	}
	
	cout << count << endl ;
	
	return 0;	
}
