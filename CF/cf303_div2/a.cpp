#include <bits/stdc++.h>

using namespace std;
#define LL long long
#define vi vector<int>
#define vLL vector<LL>
#define pii pair<int,int>

int main()
{
	int grid[109][109];
	bool goodCar[109];
	memset(goodCar,0,sizeof(goodCar));// all are good 
	int n;
	cin >> n ;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			cin >> grid[i][j];
		}	
	}
	
	
	int count = 0 ; 
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			if(grid[i][j]==1) goodCar[i] = 1 ;
			else if(grid[i][j]==2) goodCar[j] = 1 ;
			else if(grid[i][j]==3){
				goodCar[i] = 1 ;
				goodCar[j] = 1 ;
			}
		}	
	}
	vi ans ; 
	for(int i = 1 ; i <= n ; i++){
		if(!goodCar[i]) { count++; ans.push_back(i);}
	}
	cout << count << endl ;
	
	for(int i = 0 ; i < count ; i++){
		cout << ans[i] ;
		if(i != count) cout << " ";
		
	}cout << endl;
	
	return 0;	
}
