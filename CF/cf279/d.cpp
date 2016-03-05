#include <bits/stdc++.h>

using namespace std;

#define ll long long 


int main(){


	ll a1 , b1 , a2 , b2 ; 
	
	cin >> a1 >> b1 >> a2 >> b2 ; 
	
	
	ll totalFirst = a1 * b1 , totalSecond = a2*b2;
	
	ll need2_BitesforA = 0 , need2_BitesforB = 0 ,need3_BitesforA = 0 , need3_BitesforB = 0 ; 
	
	
	
	while( totalFirst % 2 == 0 ){
		
		need2_BitesforA++;
		
		totalFirst /= 2 ; 
		
	}
	
	
	while( totalFirst % 3 == 0 ){
		
		need3_BitesforA++;
		
		totalFirst /= 3 ; 
		
	}
	
	
	
	while( totalSecond % 2 == 0 ){
		
		need2_BitesforB++;
		
		totalSecond /= 2 ; 
		
	}
	
	while( totalSecond % 3 == 0 ){
		
		need3_BitesforB++;
		
		totalSecond /= 3 ; 
		
	}
	
	  
	if(totalFirst != totalSecond ) { cout << -1 << endl ; return 0 ;  }
	
	
	ll min3_bites = min(need3_BitesforA,need3_BitesforB);
	
	ll ans = max(need3_BitesforA,need3_BitesforB) - min3_bites ; 
	
	
	while( need3_BitesforA > min3_bites ){
		
		if( a1 % 3 == 0 ){
		
			a1 /= 3 ;
			
			a1 *= 2 ; 
		
		}
		
		else{
			
			b1 /= 3 ;
			
			b1 *= 2 ; 
			
		}
		
		need2_BitesforA++;
		need3_BitesforA--;
		
	}
	while( need3_BitesforB > min3_bites ){
		
		if( a2 % 3 == 0 ){
		
			a2 /= 3 ;
			
			a2 *= 2 ; 
		
		}
		
		else{
			
			b2 /= 3 ;
			
			b2 *= 2 ; 
			
		}
		
		need2_BitesforB++;
		need3_BitesforB--;
		
	}
	
	ll min2_bites = min(need2_BitesforA,need2_BitesforB);
	
	ans += max(need2_BitesforA,need2_BitesforB) - min2_bites ; 
	
	
	while( need2_BitesforA > min2_bites ){
		
		if(a1 % 2 == 0 ){
			
			a1 /= 2 ;
			
		}
		else b1 /= 2; 
		
		
		need2_BitesforA--;  
		
	}
	
	while( need2_BitesforB > min2_bites ){
		
		if(a2 % 2 == 0 ){
			
			a2 /= 2 ;
			
		}
		else b2 /= 2; 
		
		
		need2_BitesforB--;  
		
	}
	
	
	cout << ans << endl; 
	
	cout << a1 << " " << b1 << endl <<  a2 << " " << b2 << endl ; 
	 
	
	
	
	
	return 0; 
}
