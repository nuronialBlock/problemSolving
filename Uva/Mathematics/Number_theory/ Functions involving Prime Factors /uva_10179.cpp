/*

	Uva_10179
	Euler Phi / Totient function
	FUnction involing Prime factors
	
*/

#include <bits/stdc++.h>

using namespace std ;

typedef long long LL;

LL phi( LL n ){
	
	LL ans = n ; 
	
	for(LL i =2 ; i * i <= n ; i++){
		
		if( !(n % i) ){
			
			while( !(n % i) ){
				
				n /= i ;
				
			}
			
			ans -= (ans/i);
		
		}
		
	
	}
	
	if( n > 1 ) ans -= (ans/n);
	
	
	return ans ;
}

int main()
{
	
	LL n ;
	
	while(cin >> n && n ){
		
		if(n==1) cout << 1 <<endl;
		else cout << phi(n) << endl;
		
	}

	return 0 ;
}
