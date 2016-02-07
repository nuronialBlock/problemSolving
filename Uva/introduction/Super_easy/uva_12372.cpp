#include <bits/stdc++.h>

using namespace std;

int main()
{

	int tc; 
	
	cin >> tc ; 
	
	int kase = 0 ; 
	
	while(tc--){
		
		int a , b , c ; 
		
		
		cin >> a >>  b >> c  ;
		
		int good = 1 ; 
		
		if(a > 20 || b > 20 || c >20 ) good = 0 ;
		
		
		if(good) printf("Case %d: good\n",++kase);
		else printf("Case %d: bad\n",++kase); 
		
		
	}


	return 0; 
}
