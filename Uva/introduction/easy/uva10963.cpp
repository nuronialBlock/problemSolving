#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int tc,n,kase = 1  ; 
	
	cin >> tc ; 
	
	
	while(tc--){
	
	
		cin >> n ; 
		
		int initial  ; 
		int diff = 0 ; 
		
		bool ans = 1 ; 
		
		for(int i = 0 ; i < n ; i++ ){
		
			int x , y ; 
			
			cin >> x >> y ;
			
			 if( i == 0 ) initial = abs(x-y);
			 else diff = abs(x-y);
			 
			 if( i!=0 && diff != initial ) ans = 0 ; 
			 
			 
			
		}
		
		if(kase > 1 ) cout << endl;
		
		if(ans) cout << "yes\n";
		else cout << "no\n";
		
		kase++;
	
	
	}


	return 0 ; 

}
