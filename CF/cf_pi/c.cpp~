//hasta la victoria siempre

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int,int>
#define pb push_back
#define vi vector<int>
#define LL long long

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define maxi 100005

int main()
{
	ios_base::sync_with_stdio(0);
	
	LL n , k;
	
	cin >> n >> k;
	
	map<LL,LL> right , left; 
	LL a[n+2];
	LL num;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		right[a[i]]++;
	}
	
	LL ans = 0;
	
	for(int i = 0 ; i < n ; i++){
		LL k1 = 0 , k2 = 0;
		
		if(a[i] % k == 0){
			k1 = left[a[i]/k];	
		}
		
		right[a[i]]--; // for the case 1 we have to do it here 
		
		k2 = right[a[i]*k];
		ans += (k1 * k2);
		
		left[a[i]]++;
		
		
	}
	
	cout << ans << "\n";
	
	return 0;
}


