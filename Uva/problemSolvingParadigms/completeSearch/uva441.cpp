#include <bits/stdc++.h>

using namespace std;

int main(){
	int k ,kase = 0;
	while(cin >> k && k){
		++kase;
		if(kase > 1) printf("\n");
		int ara[k+1];
		for(int i = 0 ; i < k ; i++) cin >> ara[i];
		
		for(int i = 0 ; i < k - 5 ; i++)
			for(int j = i + 1 ; j < k - 4 ; j++)
				for(int l = j + 1 ; l < k - 3 ; l++)
					for(int m = l + 1 ; m < k - 2 ; m++)
						for(int n = m + 1 ; n < k - 1 ; n++)
							for(int o = n + 1 ; o < k ; o++)
								printf("%d %d %d %d %d %d\n",ara[i],ara[j],ara[l],ara[m],ara[n],ara[o]);


	}
	return 0;
}