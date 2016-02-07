#include <bits/stdc++.h>

using namespace std; 

int main()
{

	int n ;
	
	string s1 = "one" , s2 = "two" , s3 = "three" ;
	string input ;
	cin >> n; 
	
	while(n--){
		
		cin >> input ;
		
		if( input.size() == s3.size() ) cout << 3 <<endl;
		
		else {
		
			int two = 0 , one = 0 ;
			
			for(int i = 0 ; i < 3 ; i++ ){
				
				if(input[i] == s1[i]) one++;
				if(input[i] == s2[i]) two++;
				
				
			}	
			
			
			if(one > two ) cout << 1 << endl;
			else cout << 2 << endl;
			
 		
		}
 		
		
		
	}
	
	return 0 ;
}
