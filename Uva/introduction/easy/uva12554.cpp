#include <bits/stdc++.h>

using namespace std ; 


string s = "Happy birthday to you Happy birthday to you Happy birthday to Rujia Happy birthday to you ";
	
vector <string> song , people  ;
	
 
int main()
{
	
	int now = 0 ; 
	for( ; now < s.size() ; now++){
		
		string k;
		
		while( s[now] != ' ' ){
			
			k += s[now];
			now++;
				
		}
		
		song.push_back(k);
	}
	 
	
	int n ; 
	cin >> n ;
		
	for(int i = 0 ; i < n; i++ ){
		
		string k ; 
		cin >> k ; 
		
		people.push_back(k);
		
	}		
	
	
	
	int ans = ceil( (double)(n/16.0));
	
	
	int p =0 ; 
	for(int i = 0 ;  i < ans ; i++ ){
		
		
		for(int j = 0 ; j < 16 ; ){
			
			if(p >= n) p = 0 ;
			
			while( p < n ){
				
				if( j == 16 ) break;
				
				cout << people[p] << ": "<< song[j] << endl;	
				
				p++;
				j++;
			}
			
						
		
		}
		
	
	
	}
	
	
	
	
	
	
	
	return 0;
}
