#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m, w , c ;
	
	while(cin >> m >> w >> c){
		
		if(!m && !w) break;
		
		double  p = (m * 1.0 ) / (m + w);
		double dp[103][2];
		dp[0][1] = 0;
		dp[0][0] = 1;
		
		for(int i = 1 ; i <= c ; i++){
			dp[i][0] = dp[i-1][1] * p + dp[i-1][0] * (1-p);
			dp[i][1] = dp[i-1][0] * p + dp[i-1][1] * (1-p);  
		} 
		
		printf("%.7lf\n",dp[c][0]);
		
	}
	
	return 0;
	
}
