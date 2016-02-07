#include <bits/stdc++.h>

using namespace std; 

int main()
{
	
	int a , b , c , d  ;
	
	while(cin >>a >> b >> c >> d ){
	
		if( !a && !b && !c && !d ) break; 
		
		int total = 360 *3  ; 
		
		
		 
		if ( a < b )  total += ( (40+a-b)* 9 ); 
		else total += (a-b)*9 ; 
		
		if ( b < c ) total += (c-b) * 9 ; 
		else total += (40+c-b) * 9 ;
		
		if ( c < d ) total += ( (40+c-d)* 9 ); 
		else total += (c-d)*9 ; 
		
		cout << total << endl ;
		
		
	}
	
	

	return 0 ; 
}
