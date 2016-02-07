#include <bits/stdc++.h>

using namespace std;

#define SET(a,n) memset(a,n,sizeof(a))
#define ull unsigned long long int 

ull dp[21][10001];
int coin[22];

void calculate(){
	
	for(int i = 0 ; i < 21 ; i++){
		
		coin[i] = (i+1) * (i+1) * (i+1) ;
		
	}

}


ull Rdp(int idx , int sum ){
	
	
	if(idx > 20 ){
		
		if(sum == 0 ) return 1 ;
		else return 0 ;
		
	}
	
	
	if(dp[idx][sum]!=-1) return dp[idx][sum];
	
	
	ull taken= 0 , notTaken = 0;
	
	if(sum - coin[idx] >= 0 ) taken = Rdp( idx, sum - coin[idx] ); 
	
	notTaken = Rdp( idx+1, sum );
	
	return dp[idx][sum] = taken + notTaken;


}


int main()
{
	
	calculate();
	SET(dp,-1);
	ull t = Rdp(0,9999);
	int amount; 
	while(cin >> amount ){
		
		cout << dp[0][amount] << endl;
		
	}
	

	
	return 0;
}
