#include <bits/stdc++.h>

using namespace std;

int main()
{
	
	int tc , kase = 0;
	
	cin >> tc;
	cin.ignore();
	while(tc--){
		
		cout << "Case " << ++kase <<": ";
		string s[55];
		
		for(int i = 0 ; i < 52 ; i++){
			string s1 ;
			cin >> s1 ;
			s[i] = s1;
		} 
		
		bool moved[54];
		memset(moved,0,sizeof moved);
		int cnt = 0;
		for(int rep = 3 , i = 51 - 25 ; rep > 0 ; rep--){
			
			int k = 0;
			if(s[i][0] >= '2' && s[i][0] <= '9'){
				k = 10 - (s[i][0] - '0');
				cnt += (s[i][0] - '0');
			}
			else cnt += 10;
			
			moved[i] = 1;
			i--;
			for(int j = 0 ; j < k ; j++){
				moved[i] = 1;
				i--;
			}
			
		}
		
		//cout << cnt  << "\n";
		string ans ;
		int kk = 1 ;
		for(int i = 0 ; i < 52 ; i++){
			if(moved[i] != 1){
				if(kk == cnt){
					ans += s[i];
					break;
				}
				++kk;
			}
		}
		
		cout << ans << "\n";
		
	}
	
	return 0;
}
