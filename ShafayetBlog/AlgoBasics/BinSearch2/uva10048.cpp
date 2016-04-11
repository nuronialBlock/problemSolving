#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define pb push_back

vi graph[101], cost[101];
int hiCost, loCost;

int BFS(int A, int B, int hi){
	int ans = 0;
	queue <int> Q;
	bool visited[110];
	memset(visited, 0, sizeof visited);
	Q.push(A);
	visited[A] = 1;

	while(!Q.empty()){
		int node = Q.front();
		Q.pop();
		if(node == B) return ans;
		int sz = graph[node].size(); 

		for(int i = 0 ; i < sz; i++){
			int newNode = graph[node][i];
			int nodeCost = cost[node][i];
			if(nodeCost <= hi && !visited[newNode]){
				// cout << "node: " << newNode << "\n";
				Q.push(newNode);
				visited[newNode] = 1;
				ans = max(ans, nodeCost);
			}
		}
	} 

	return -1;
}

int binSearch(int A, int B){
	int mid, hi, lo, ans;
	hi = hiCost;
	lo = loCost;
	ans = -1;
	bool reachedOnce = 0;
	while(hi >= lo){
		mid = (hi + lo) / 2;
		int canReach = BFS(A,B,mid);
		// cout << "Mid: " << mid << " canReach " << canReach << "\n";
		if(canReach == -1){
			lo = mid + 1;
		}
		else {
			hi = mid - 1;
			if(!reachedOnce) {
				ans = canReach;
				reachedOnce = 1;
			}
			else ans = min(ans,canReach);
		}
	}

	return ans;
}

int main()
{
	// ios_base::sync_with_stdio(0);
	int c, s, q, kase = 0;

	while(scanf("%d %d %d",&c, &s, &q) && c && s && q){
		if(kase) printf("\n");
		printf("Case #%d\n", ++kase);
		for (int i = 0; i < 101; ++i)
		{
			graph[i].clear();
			cost[i].clear();
		}
		hiCost = 0;
		for (int i = 0; i < s; ++i)
		{	
			int c1, c2, d;
			scanf("%d %d %d", &c1, &c2, &d);
			graph[c1].pb(c2);
			graph[c2].pb(c1);
			cost[c1].pb(d);
			cost[c2].pb(d);
			hiCost = max(hiCost,d);

			if(!i) loCost = d;
			else loCost = min(loCost, d);
		}

		for (int i = 0; i < q; ++i)
		{
			int A, B;
			scanf("%d %d",&A, &B);
			int ans = binSearch(A,B);
			if(ans == -1) printf("no path\n");
			else printf("%d\n", ans);
		}
	}

	return 0;
}