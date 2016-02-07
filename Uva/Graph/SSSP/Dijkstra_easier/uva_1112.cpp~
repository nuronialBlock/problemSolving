// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpii vector <pii>
#define vpsi vector<psi>
#define vd vector <double>
#define vb vector <bool>
#define vs vector <string>
#define vLL vector <LL >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>
#define mci map<char,int>

#define PQ priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a))

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

vi graph[109];
vi cost[109];
int tc , n , e , t , m;
int dist[109];

class node{

public:
	int u , w;
	node(int a , int c){
		u = a ;  w = c; 
	}
	
	bool operator < (const node& p) const{
		return p.w < w;
	}

};

int Dijkstra(int src){
	SET(dist,63);
	dist[src] = 0;
	PQ<node> q;
	q.push(node(src,dist[src]));
	
	while(!q.empty()){
		node top = q.top(); q.pop();
		int vrtx = top.u;
		if(vrtx == e) return dist[vrtx];
		int siz = graph[vrtx].sz;
		loop(i,0,siz){
			int newNode = graph[vrtx][i];
			int wgt = cost[vrtx][i];
			if(dist[vrtx] + wgt < dist[newNode]){
				dist[newNode] = dist[vrtx] + wgt;
				q.push(node(newNode,dist[newNode]));
			}	
		}
	}
	
	return -1;
}

int main()
{

	fasterIO;
	
	int kase = 1 , limit = 0;
	cin >> tc;
	limit = tc;
	while(tc--){
		int u , v , w;
		cin >> n >> e >> t >> m;
		
		loop(i,0,109){
			graph[i].clear();
			cost[i].clear();
		}
		
		loop(i,0,m){
			cin >> u >> v >> w;
			graph[u].pb(v);
			cost[u].pb(w);
		}
		int cnt = 0 ;
		for(int i = 1 ; i <= n ; i++){
			int res = Dijkstra(i);
			if(res <= t && res != -1) cnt++;
		}
		
		cout << cnt << "\n";
		if(kase != limit) cout << "\n";
		++kase;
	}
	
	return 0;
}

















