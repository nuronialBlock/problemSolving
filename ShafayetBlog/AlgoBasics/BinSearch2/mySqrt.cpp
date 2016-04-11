#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back


double mySqrt(double x){
	double lo, hi, mid; 
	lo = 0.0; hi = x;
	while(hi - lo > .00000001){
		mid = (lo + hi) / 2.0;
		double sqr = mid * mid;
		if(sqr > x) hi = mid;
		else lo = mid;
	}
	return mid;
}

int main(){
	ios_base::sync_with_stdio();

	double ans, n;
	cin >> n;
	ans = mySqrt(n);
	printf("Sqrt of %.5lf = %.10lf\n",n, ans);

	return 0;
}