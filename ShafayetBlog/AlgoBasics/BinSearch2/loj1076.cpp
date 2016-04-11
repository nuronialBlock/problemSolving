#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

vi v;

bool check(int m, int n, int curMax){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(sum + v[i] <= curMax){
			sum += v[i];
			continue;
		}
		if(sum + v[i] > curMax){
			m--;
			sum = 0;
		}
		if(!m) return 0;
		sum += v[i];
	}

	return 1;
}

int binSearch(int h, int l, int m , int n){
	int hi, lo, mid;
	hi = h; lo = l;
	int ans = -1;
	while(hi >= lo){
		mid = (hi + lo) / 2;
		// cout << "MID VAL:: " << mid << "\n";
		bool canPour = check(m,n,mid);
		if(canPour){
			// cout << "canPour\n";	
			hi = mid - 1;
			if(ans == -1) ans = mid;
			else ans = min(ans, mid);
		}
		else {
			lo = mid + 1;
		}
	}

	return ans;
}

int main()
{
	int tc, kase = 0;
	scanf("%d",&tc);
	while(tc--){
		int n , m, sum, hi;
		v.clear();
		sum = 0;
		hi = 0;
		scanf("%d %d",&n, &m); 
		for (int i = 0; i < n; ++i)
		{
			int k;
			scanf("%d",&k);
			v.pb(k);
			sum += k;
			hi = max(hi,k);
		}
		int ans = binSearch(sum,hi,m, n);
		printf("Case %d: %d\n", ++kase, ans);
	}
}