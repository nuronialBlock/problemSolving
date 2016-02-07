#include <bits/stdc++.h>

using namespace std;

double percent[102] ; 
		

int main()
{
	
	
	
	int month , n  ; 
	double ins, capital ;
	
	
	while(cin >> month >> ins >> capital >> n ){
			
		
		for(int i = 0 ; i < 102 ;i++) percent[i] = -1;	
		
		if(month < 0 ) break; 
		
		for(int i = 0 ; i < n ; i++ ) {
			
			int k ; 
			double p ;
			
			cin >> k >> p ; 
			
			percent[k] = p ; 
		
		}
		
		
		for(int i = 0 ; i <= month ; i++ ){
			
			if(percent[i] == -1 ){
				
				percent[i] = percent[i-1];
				
			}	
			
				
		}
		
		double buyer = capital;
		double carPrice = capital + ins ;
		
		double permonth = (double) (capital / (1.0 * month) ) ;  
		
		int ans = 0 ;
		
		for(int i = 0 ; i <= month ; i++){
			
			
			if(i!=0) buyer -= permonth ; 
			
			
			carPrice -= (carPrice*percent[i]);
			
			if(  buyer < carPrice   ) {ans = i  ; break; } 
			
		}
		
		
		cout << ans ;
		
		if(ans == 1 ) cout <<" month\n"; 
		else cout <<" months\n";
		
			
		
	
	}
	
	
	
	

	return 0; 
}
