#include <bits/stdc++.h>

using namespace std;


// problem statement: you have to distribute the candies betwn two male groups 

int main()
{
	int m ,w , c;
	
	while(cin >> m >> w >> c){
		
		if(!w && !m) break;
		
		double p = (m * 1.0) / (m+w); // male Got A candie
		
		double dp[103][2] ; // i , j ---> i means number of candy and j means 0 and 1, where 0 means when a person's prob of getting a candy evenly, 0 means opposite of it 
		
		dp[0][0] = 1 ; // if I recieved 0 candy then I didn't give candy to anyone so two groups are always even  
		dp[0][1] = 0 ; 
		
		for(int i = 1 ; i <= c ; i++){
		
			dp[i][0] = dp[i-1][1] * p + dp[i-1][0] * (1-p); 
			dp[i][1] = dp[i-1][0] * p + dp[i-1][1] * (1-p);
			
		}
		
		printf("%.7lf\n",dp[c][0]);
		
	}
	
	return 0;
	
}
