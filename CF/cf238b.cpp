#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int n;
	
	string s;
	
	cin>>n;
	cin>>s;
	
	int count = 0;
	
	for(int i = 0 ; i < n ; i++){
		
		if(s[i]=='.'){
			int r = 0 , l = 0;
		
			for(int j = i-1 ; j >= 0 ; j--){
				if(s[j]=='R'){
					r = i-j;
					break;
				}
				else if(s[j]=='L'){
					break;
				}
			}
		
			for(int j = i+1 ; j < n ; j++){
				if(s[j]=='L'){
					l = j - i ;
					break;
				}
				else if(s[j]=='R'){
					break;
				}
			}
		
			if(r==l) count++;
	
		}	
		
	}
	cout << count << endl;	
	return 0;
}
