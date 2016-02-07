#include <bits/stdc++.h>

using namespace std;

//formula: p(A | B) = p(A and B) / p(B)

// Key Concept: x can shop becuz y can't

// need to know: probability and bit manipulation

int numberOfBits(int n){
	int sum = 0;
	
	while(n > 0){
		if(n & 1) sum++;
		n >>= 1;
	}
	return sum;
}


int main()
{
	int r , n , tc = 0;
	
	while(cin >> n >> r ){
		
		if(!n && !r) break;
		++tc;
		double prob[n+2] , ans[n+2];
		
		for(int i = 0 ; i < n ; i++){
			cin >> prob[i];
			ans[i] = 0.0000;
		}
		
		
		
		double tot = 0.000;
		
		
		int target = 1 << n;
		for(int kk = 0 ; kk < target ; kk++){
			
			if(numberOfBits(kk) == r){
					
				double Pb = 1.000000 ;
				int num = kk;
				
				for(int i = 0 ; i < n ; i++){
					if(num & 1) Pb *= prob[i];
					else Pb *= (1 - prob[i]);
					
					num >>= 1;
				}
				num = kk;
				for(int i = 0 ; i < n ; i++){
					if(num & 1) ans[i] += Pb;
					num >>= 1; 
				}
		
				tot += Pb;
			}
			
		}
		
		printf("Case %d:\n",tc);
		for(int i = 0 ; i < n ; i++ ){
			printf("%.6lf\n",ans[i] / tot);
		}
		
	}
	
	return 0 ;
}
