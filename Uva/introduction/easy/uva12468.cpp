#include <bits/stdc++.h>

using namespace std ; 


int main(){
	

	int a , b ; 
	
	while( cin >> a >> b ) {
		
		if(a ==-1 && b==-1 ) break ; 
		
		int maxi = max(a,b) ; 
		int mini = min(a,b) ; 
		
		int upward = maxi - mini ; 
		
		int down = (99-maxi) + (mini-0) + 1;
		
		
		int ans = min(upward,down);
		cout << ans << endl;
		
	}
	
	
	
	return 0 ; 	
}
