#include <bits/stdc++.h>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int a , b , c;
		cin >> a >> b >> c;
		bool soln = false;
		for(int i = -100 ; i < 101  && !soln; i++){
			for(int j = -100; j <  101 && !soln; j++){
				for(int k = -100; k <  101 && !soln; k++){
					if(i != j && i != k && j != k && !soln){
						if((i + j + k == a) && (i * j * k == b) && (i * i  + j * j + k * k == c)){
							soln = true;
							printf("%d %d %d\n",i,j,k);
						}
					}
				}
			}
		}
		if(!soln) printf("No solution.\n");
	}
	return 0;
}
