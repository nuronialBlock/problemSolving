#include <bits/stdc++.h>

using namespace std;

long long sum(long long n){
	return ((n * (n+1)) / 2) ;
}

int main()
{
	long long n, m, Kmin, Kmax;

	cin >> n >> m;

	Kmax = sum(n - m);

	long long mod = n % m, div = n / m;

	Kmin = (sum(div-1) * (m - mod)) + (sum(div) * mod);

	cout << Kmin << " " << Kmax << "\n"; 
	
	return 0;
}