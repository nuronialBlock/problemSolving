#include <bits/stdc++.h>

using namespace std;

int main()
{
		
	int n , m , ans  = 0 , lo , hi ; 


	cin >> n >> m ;

	hi = n ; 

	if(n%2 != 0){
		lo = ((n-1) / 2) +1  ;

	}

	else{

		lo = n / 2 ;

	} 

	for(int i = lo ; i <= hi ; i++ ){

		if(i % m == 0 ) {ans = i ; break ;} 
	}

	if(ans == 0 ) cout << -1 << endl; 
	else cout << ans << endl ;

	return 0;
}