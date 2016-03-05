#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define LL long long
#define vi vector<int>
#define vLL vector<LL>

int main()
{
	ios_base::sync_with_stdio(0);
	
	int n, m , q ;
	cin >> n >> m >> q ;
	int grid[n+2][m+2];
	int count[n+2];
	memset(count,0,sizeof(count));
	for(int i = 1 ; i <= n ; i++){
	
		for(int j = 1 ; j <= m ; j++){
		
			cin >> grid[i][j];
			
		}
	}
	
	for(int i = 1 ; i <= n ; i++){
		int high = 0 ;
		int consi = 0 ; 
		for(int j = 1 ; j <= m ; j++){	
			if(grid[i][j]==1) consi++;
			else consi = 0;
			high = max(high,consi);
		}
		count[i] = high;
	}
	
	int r , c ;
	int ans ;
	for(int i = 0 ; i < q ; i++){
		cin >> r >> c ;
		grid[r][c] ^= 1 ;
		int high = 0 ;
		int consi = 0 ; 
		for(int j = 1 ; j <= m ; j++){	
			if(grid[r][j]==1) consi++;
			else consi = 0;
			high = max(high,consi);
		}
		count[r] = high;
		ans = -1 ;
		for(int j = 1 ; j <= n ; j++){
			ans = max(count[j],ans);
		}
		cout << ans << endl;
	}
	
	return 0;
}
