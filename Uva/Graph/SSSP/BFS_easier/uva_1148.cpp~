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

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


vi graph[100005];
int visited[100005];


int bfs(int src , int dest){
	
	SET(visited,-1);
	visited[src] = 0;
	queue<int> q;
	q.push(src);
	
	while(!q.empty()){
		int node = q.front(); q.pop();
		for(int i = 0 ; i < graph[node].sz ; i++){
			int newNode = graph[node][i];
			if(newNode == dest) return visited[node];
			if(visited[newNode] == -1){
				q.push(newNode);
				visited[newNode] = visited[node] + 1;
			}	
		}
	}

}


int main()
{

	fasterIO;
	
	int n , tc;
	cin >> tc;
	while(tc--){
		cin >> n;
		
		for(int i = 0 ; i < 100005 ; i++) graph[i].clear();
		
		loop(i,0,n){
			int comrade , edge;
			cin >> comrade >> edge;
			loop(j,0,edge){
				int node;
				cin >> node;
				graph[comrade].pb(node);
			}
		}
		int src , dest;
		cin >> src >> dest;
		int ans = bfs(src,dest);
		
		cout << src << " " << dest << " " << ans << "\n";
		if(tc) cout  << "\n";
	}
	
	return 0;
}

















