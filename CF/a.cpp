#include <bits/stdc++.h>

using namespace std;

int main()
{

	
	long long  n ;
	cin >>n ;
	
	long long odd, even ; 
	long long n1 , n2 ;
	if( n % 2 == 0 ) {
		
		n1 = n / 2 ;  
		odd = (n1 * n1 );
		odd *=-1;
		even = (n1 * (n1+1));
	}
	
	else{
		
		n1 = n/2 + 1;
		n2 = (n/2); 
		
		odd = (n1 * n1 );
		odd *=-1;
		even = (n2 *(n2+1));	
		
	}
	
	cout <<even+odd <<endl; 
	return 0 ; 
}
