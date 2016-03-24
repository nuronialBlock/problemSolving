#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back


int main()
{
	int t, kase = 0 ;
	scanf("%d",&t);
	while(t--){
		++kase;
		cout << "Case " << kase << ":\n";
		vi points;
		int x, y, n , q;
		scanf("%d %d",&n, &q);
		for (int i = 0; i < n; ++i)
		{
			int v;
			scanf("%d",&v);
			points.pb(v);
		}
		sort(points.begin(), points.end());
		for (int i = 0; i < q; ++i)
		{
			scanf("%d %d",&x, &y);
			vi ::iterator lo, hi;
			lo = lower_bound(points.begin(), points.end(), x);
			hi = upper_bound(points.begin(), points.end(), y);
			int ans = hi - lo;
			printf("%d\n",ans); 
		}

	}

	return 0;
}