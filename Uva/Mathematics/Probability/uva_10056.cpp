#include <bits/stdc++.h>

using namespace std;

#define eps .0000000001
#define eps2 .0001

int main()
{
	int n ;
	
	cin >> n ;
	
	while(n--){
		
		int noOfPlayer , player;
		double prob , ans ;
		cin >>  noOfPlayer >> prob >> player;
		
		if(prob < eps){
			printf("0.0000\n");
			continue;
		}
		
		double nth =  1.000000;
		
		ans = prob ;
		
		for(int i = 0 ; i < noOfPlayer ; i++) nth *= (1-prob);	
		for(int j = 0 ; j < player - 1 ; j++) ans *= (1-prob);
	
		double temp = 1 + nth;	
		
		double nn = nth;
		
		while(1){
		
			nth *= nn;
			temp += nth;
			if(nth < .00001) break;
		}
		
		ans *= temp;
		
		printf("%.4lf\n",ans+eps);
		 
	}

	return 0;
}
