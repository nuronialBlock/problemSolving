#include <bits/stdc++.h>

using namespace std;

#define SET(a,n) memset( a , n , sizeof(a) ) 
#define mod 100000000
#define ll long long

int dp[109][109][3];
int n1 , n2 , k1 ,  k2 ; 



int Rdp(int n1 , int n2 , int f ){
	
	
	if(dp[n1][n2][f] != -1 ) return dp[n1][n2][f];
	
	if( n1 + n2 == 0 ) {
		
		return 1;
		
	}
	dp[n1][n2][f] = 0 ;
	if(f == 1 ){
	
		for(int i = 1 ; i <= min(n1, k1) ; i++ ){
		
			dp[n1][n2][f] += Rdp( n1 - i , n2 , 2 ) ;
			dp[n1][n2][f] %= mod;
 		}
	
	}
	
	else {
		
		for(int i = 1 ; i <= min(n2, k2) ; i++ ){
		
			dp[n1][n2][f] += Rdp( n1 , n2 - i , 1 )  ;
			dp[n1][n2][f] %= mod; 
 		}
		
	}
	

	return dp[n1][n2][f];
}


int main()
{
	
	
	
	cin >> n1 >> n2 >> k1 >> k2 ;
	
	
	SET (dp,-1) ;

	int FrontHorseman = Rdp(n1, n2 , 1 ) % mod ;
	int FrontFootman  = Rdp(n1, n2 , 2 ) % mod ; 

	cout << ( ( FrontHorseman + FrontFootman ) % mod ) << endl;


	return 0;
	
}
