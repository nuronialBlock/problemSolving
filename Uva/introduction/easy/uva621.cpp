#include <bits/stdc++.h>

using namespace std;


int main(){

	
	int tc;
	
	cin >> tc ;
	
	while(tc--){
		
		string s ; 
		
		cin >> s;
		
		int siz = s.size(); 
		
		if(siz == 1 || siz == 2 ) cout << '+' << endl;
		
		else{
			
			if(s[siz-1] == '5' && s[siz-2]=='3') cout << '-' << endl;
			
			
			else if( siz > 3 && s[0] == '1' && s[1] == '9' && s[2] == '0') cout << '?' << endl;
			
			else cout << '*' << endl;
			
		}
		
		
		
	}



	return 0;
}
