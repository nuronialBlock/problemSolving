/*
	
	uva_10127
	Modular arithmetic
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n; 
	
	while(cin>>n){
		
		if(!n) cout << 0 <<endl;
		
		else {
			int count = 1 ; 
			int num = 0 ;
			while(1){
			
				num = ( 10 * num + 1 );
				
				if( num % n == 0 ){
					cout << count << endl ;
					break;
				}
				num %= n ;
				count++;
				
			}
				
		}
		
	}


	return 0 ; 
}
