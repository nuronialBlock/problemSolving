#include <bits/stdc++.h>

using namespace std; 

int main()
{
	
	
	int n ; 
	int kase = 0 ;
	
	while(cin >> n  ){
		
		if(!n) break;
			
		int notGiven = 0 , given = 0 ;
		
		int k ; 
		
		for(int i = 0 ; i < n ; i++ ){
			
			cin >> k ;
			
			if(!k) given ++;
			else notGiven++;
		}
		
		printf("Case %d: %d\n",++kase,notGiven-given);
		
	}



	return 0 ;  
}
