#include <bits/stdc++.h>

using namespace std;
#define ll long long

int ara[10005];

int main()
{


	int tc; 

	while(scanf("%d",&tc)==1){

		if(tc == 0 ) break;

		for (int i = 0; i < tc; ++i)
		{
			scanf("%d",&ara[i]);
		}
		
		ll maxi = -(1 << 30) ; 
		
		for(int i = 0 ; i < tc ; ){

			ll ans  = 0 ;

			for(int j = i ; j < tc ; j++ , ++i ){

				ans += ara[j];

				maxi = max(ans , maxi);

				if(ans <= 0 ) {++i;break;}

			}

		}

		if( maxi > 0 )	printf("The maximum winning streak is %lld.\n", maxi );
		else printf("Losing streak.\n");

	}


	return 0 ; 
}