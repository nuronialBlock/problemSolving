#include <bits/stdc++.h>

using namespace std; 

int main()
{
	
	int tc; 
	
	cin >> tc; 
	
	
	while(tc-- ){
		
		int r , c , rans, cans ; 
		
		
		cin >> r >> c ; 
		
		
		r -= 2 ; c -= 2 ;
		
		rans = r / 3 ;
		cans = c / 3 ;
		
		if(r%3) rans++;
		if(c%3) cans++;
		
		
		cout << rans * cans << endl ; 
 		
		
	}



	return 0 ; 
}
