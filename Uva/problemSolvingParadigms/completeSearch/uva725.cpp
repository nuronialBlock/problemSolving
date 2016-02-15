#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, kase = 0;

	while(cin >> n && n){
		++kase;
		if(kase > 1) printf("\n");
		int a , f;
		bool haveSoln = false;
		for(int f = 1234 ; f <= (98765 / n) ; f++){
			a = f * n;
			int tmp , used = (f < 10000);
			tmp = a;
			while(tmp){
				used |= (1 << (tmp % 10));
				tmp /= 10;
			}
			tmp = f;
			while(tmp){
				used |= (1 << (tmp % 10));
				tmp /= 10;
			}
			if(used == (1 << 10) - 1){
				haveSoln = true;
				printf("%0.5d / %0.5d = %d\n", a , f , n);
			}
		}
		if(!haveSoln){
			printf("There are no solutions for %d.\n",n);
		}
	}
	return 0;
}