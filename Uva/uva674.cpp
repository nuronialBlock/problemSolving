#include <bits/stdc++.h>

using namespace std;

#define SET(a,n) memset(a,n,sizeof(a))


int cost[] = {50 , 25 , 10 , 5 , 1};
int dp[6][10000];
int make ;

int messiMagic(int i , int sum ){
	
	
	if( i > 4 ){
		
		if( sum == 0 ){
			
			return 1 ;
		} 
		else {
//			dp[i][sum] = 0 ;
			return 0 ; 
		}
		
		
	} 
	if(dp[i][sum] != -1 ) return dp[i][sum] ;
	
	
	int taken = 0  ;
	int notTaken = 0  ;
	
	if(sum - cost[i] >= 0  ) taken = messiMagic( i , sum - cost[i] ) ;
	
	notTaken = messiMagic( i + 1 , sum  );
		

	return  dp[i][sum] = taken + notTaken ;
	
}

int main ()
{
	
	SET(dp,-1);
	
	while(cin >> make ){
	
		cout << messiMagic(0,make) << endl;
		
	}
		
	

	return  0; 
}
