#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector <int>
#define vd vector <double >
#define ll long long

ll po (int i  , int n ){
	
	int ans = i ;
	
	for(int j = 0 ; j < n ; j++ ) ans *= ans  ; 
	
	
	return ans ;
}

int main(){
	
	int n ;
	
	cin >> n ;
	
	ll ans  = 0 ;
	
	for(int i = 1 ; i < 5 ; i++){
		ll num =  po(i,n) ;
		ans += ( num % 5 ) ;
	}
	
	cout << ans << endl;
	
		
	return 0;
}
