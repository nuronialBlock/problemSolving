#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

int main(){
	ios_base::sync_with_stdio(0);

	int n , q;
	while(cin >> n){
		vi height;
		for (int i = 0; i < n; ++i)
		{
			int val;
			cin >> val;
			height.pb(val);
		}
		sort(height.begin(), height.end());

		cin >> q;
		for (int i = 0; i < q; ++i)
		{
			int qq;
			cin >> qq;
			int lo, hi; 
			lo = lower_bound(height.begin(), height.end(), qq) - height.begin();
			hi = upper_bound(height.begin(), height.end(), qq) - height.begin();

			// cout << "lo :: " << lo << " hi :: " << hi <<  "\n";
			if(lo == n){
				cout << height[lo-1];
			}
			else if(height[lo] >= qq){
				if(!lo) cout << "X";
				else cout << height[lo-1];
			}
			else cout << height[lo];

			cout << " ";

			if(hi == n){
				cout << "X";
			}
			else if(qq == height[hi]){
				if(hi == n - 1) cout << "X";
				else cout << height[hi+1];
			}
			else cout << height[hi];	

			cout << "\n";	
		}

	}

	return 0;
}