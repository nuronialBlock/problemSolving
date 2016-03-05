// hasta la victoria siempre

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>

#define pq priority_queue
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

int n , m ; 
vi edge[4003];
int cost[4003];
bool adj[4002][4002];


int main()
{

	fasterIO;
	
	
	cin >> n >> m ;
	
	memset(cost,0,sizeof cost);
	memset(adj,0,sizeof adj);
	
	for(int i = 0 ; i < m ; i++){
		int a , b;	
		cin >> a >> b ;
		--a; --b;
		adj[a][b] = 1;
		adj[b][a] = 1;
		cost[a]++;
		cost[b]++;
		edge[a].pb(b);
		edge[b].pb(a);
	}	
	
	//for(int i = 0 ; i < n ; i++) cout << cost[i] << "\n";
	
	int mini = 40003;
	
	for(int i = 0 ; i < n ; i++){
		
		int m1 = i;
		bool got = 0;
		
		int costi = 40003;
		
		for(int j = 0 ; j < edge[m1].size() ; j++){
			int m2 = edge[m1][j];
			
			for(int k = 0 ; k < edge[m2].size();k++){
				if(adj[edge[m2][k]][m1] == 1){
					got = 1;
					int tot = cost[m1] + cost[m2]  + cost[edge[m2][k]] - 6;
					costi = min( tot , costi);
				}
			
			}
		
		}
	
		if(got){
			mini = min(mini,costi); 
		}
	
	}
	
	if(mini != 40003)cout << mini << "\n";
	else cout << -1 << "\n";
	return 0;
}














