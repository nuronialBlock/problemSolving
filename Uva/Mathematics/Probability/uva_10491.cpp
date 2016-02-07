																																																																					#include <bits/stdc++.h>

using namespace std;

int main()
{
	int cow , car , show ;
	
	while(cin >> cow >> car >> show){
		
		int total = cow + car ;
		int takeOne = total - show - 1;
		
		double ans = ((car * (car-1) + (car * cow)) / (total * takeOne * 1.0));
		
		printf("%.5lf\n",ans);
			
	}
	 
	return 0;
}
