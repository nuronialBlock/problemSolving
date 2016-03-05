#include <bits/stdc++.h>

using namespace std;
#define ll long long




int main()
{
	ll n , t , c ;
	
	ll ara[200009];
	
	cin >> n >> t >> c;
	int res = 0 , count = 0 ; 
	for(int i  = 1 ; i <= n ; i++){
		
		cin>>ara[i];
		
		
		if(ara[i] <= t){
			count++;
			if(count >= c ) res++;
		}
		else if(ara[i] > t) {
			count = 0;
		}
		
	}
	
	
	
	cout << res<<endl;
	
	
	
	
	return 0;
}
