#include "bits/stdc++.h"

using namespace std;

bool flag[1009][1029];

#define ff first
#define ss second
#define pii pair<int,int>
#define mp make_pair

int main(){
	ios_base::sync_with_stdio();
	
	int n , m, a, b;
	vector<pii> edges[1004];
	
	memset(flag,false,sizeof flag);
	
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++){
		int u, v, c;
		cin >> u >> v >> c;
		edges[u].push_back(mp(v,c));
		edges[v].push_back(mp(u,c));	
	}
	cin >> a >> b;

	queue<pii> q;
	q.push(mp(a,0));
	flag[a][0] = true;

	while(!q.empty()){
		int node = q.front().ff;
		int cost = q.front().ss;
		q.pop();
		int siz = edges[node].size(); 
		for(int i = 0 ; i < siz; i++){
			int orVal = cost | edges[node][i].ss;
			int newNode = edges[node][i].ff;
			if(!flag[newNode][orVal]){
				flag[newNode][orVal] = true;
				q.push(mp(newNode, orVal));
			}
		}
	}

	int min = 1029;
	for(int i = 1 ; i <= 1024; i++){
		if(flag[b][i]){
			min = i;
			break;
		}
	}
	
	if(min == 1029) cout << -1 << "\n";
	else cout << min << "\n";

	return 0;
}