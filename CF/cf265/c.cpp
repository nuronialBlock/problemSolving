#include <bits/stdc++.h>


using namespace std;

int main()
{

	string s; 
	int n , p ;
	char cr ;
	
	
	cin >> n >> p ;
	scanf("%c",&cr);
	cin >> s;
	
	
	p += 94 ;
	
	
	if( p == 95 ) {cout << "NO" << endl; return 0 ; }
	
	int sz = s.size();
	
	while( s[0] <= p ){
		
		int got = 0 ; 
		for(int i = sz - 1  ; i  >= 0 ; i-- ){
			
			if( (s[i]  > 95 ) && (s[i]  < p ) ) s[i]++;
			else continue;
			
			int j = s[i];
			if( j < p ){
				
				if( i > 1 && i < sz-1 ){
					
					if(s[i-1] != j && s[i-2] != j && s[i+1] != j && s[i+2] != j  ){
						
						cout << s << endl;
						return 0;
					}	
						
					
				}
				if( i == 1  ){
					if( s[i-1] != j && s[i+1] != j && s[i+2] != j   ){
						
						cout << s << endl;
						return 0;
					}
				}
				if(i == 0 ){
					if( s[i+1] != j && s[i+2] != j   ){
						s[i] = j ;
						cout << s << endl;
						return 0;
					}
				}
				if( i < sz ){
					if(s[i-1] != j && s[i-2] != j){
						
						cout << s << endl;
						return 0;
					}	
				}
				if( i < sz - 1 ){
					if(s[i-1] != j && s[i-2] != j && s[i+1] != j ){
						
						cout << s << endl;
						return 0;
					}	
				}
				
			}
			
		}
	
	}
	
	cout << "NO" << endl;
	

	return 0;

}
