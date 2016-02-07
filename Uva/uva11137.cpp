#include <bits/stdc++.h>

using namespace std;

#define SET(a,n) memset(a,n,sizeof(a))
#define ull unsigned long long int 

unsigned long long int dp[10001];

//void calculate(){
//	
//	for(int i = 0 ; i < 21 ; i++){
//		
//		coin[i] = (i+1) * (i+1) * (i+1) ;
//		
//	}

//}


//ll Rdp(int idx , int sum ){
//	
//	
//	if(idx > 20 ){
//		
//		if(sum == 0 ) return 1 ;
//		else return 0 ;
//		
//	}
//	
//	
//	if(dp[idx][sum]!=-1) return dp[idx][sum];
//	
//	
//	ll taken= 0 , notTaken = 0;
//	
//	if(sum - coin[idx] >= 0 ) taken = Rdp( idx, sum - coin[idx] ); 
//	
//	notTaken = Rdp( idx+1, sum );
//	
//	return dp[idx][sum] = taken + notTaken;


//}


int main()
{
	//calculate();
	
	for(int i = 1 ; i < 10000 ; i++){
		dp[i] = 0 ;
	}
	
	dp[0] = 1 ;
	
	for(int i = 1 ; i <= 21 ; i++ ){
		
		int now = i * i * i ;
		
		for(int j = now ; j < 10000 ; j++){
			
			dp[j] += dp[ j - now ];
			
		}
		
	}	
	
	
//	Rdp(0,10000);
	int amount ;
	while(cin >> amount ){
		
		cout << dp[amount] << endl;
		
	}
	

	
	return 0;
}
