#include <bits/stdc++.h>

using namespace std;

struct constraints{
	int a , b , c;
}con[22];

int main()
{
	int n , m;
	while(cin >> n >> m){
		if(n == 0 && m == 0) break;
		int ara[]={0,1,2,3,4,5,6,7};
		int a , b , c , cnt = 0;
		for(int i = 0 ; i < m ; i++){
			cin >> con[i].a >> con[i].b >> con[i].c;
		}
		do {
			bool isCnt = 1;
			for(int i = 0 ; i < m ; i++){
				a = con[i].a;
				b = con[i].b;
				c = con[i].c;
				int s1 , s2;
				for(int j = 0 ; j < n ; j++){
					if(ara[j] == a) s1 = j;
					if(ara[j] == b) s2 = j;	
				}
				if(c < 0){
					c *= -1;
					if(abs(s1 - s2) < c) {
						isCnt = 0;
						break;
					}
				}
				else{
					if(abs(s1 - s2) > c) {
						isCnt = 0;
						break;
					}
				}
			}	
			if(isCnt) cnt++;
		}while(next_permutation(ara,ara+n));

		printf("%d\n",cnt);

	}
	return 0;
}