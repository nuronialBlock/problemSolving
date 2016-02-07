#include <bits/stdc++.h>

using namespace std; 

int main(){



	double h , u , d , f ; 
	
	while(cin >> h >> u >> d >> f ){
		
		if(!h) break ; 
		
		double factor = u*(f/100.0) ; 
		
		double height = 0 ; 
		
		
		
		int day = 0 ;
		
		
		while( 1 ){
			
			
			if(u > 0) height += u ;  
			day++;
			
			if( height > h ) break;
			
			height -= d;
			u -= factor ; 
			
			
			if( height < 0 ) { day *= -1 ; break; }
			 
			
			
			
			
			
		}
		
		
		if( day < 0 ) printf("failure on day %d\n",day*(-1));
		else printf("success on day %d\n",day);
		 	
		
		
		
	} 



	return 0 ; 
	
}
