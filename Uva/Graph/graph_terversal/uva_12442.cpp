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

vi graph[50005];
int parent[50005] , child[50005];
int tc , n , kase = 0 ;

void dfs(int dada , int abba){
	
	if(graph[abba].sz == 0){
		child[abba] = 0 ;
		return ;
	}
	
	if(parent[dada] == 0) parent[abba] = 1, child[abba] = 0 ;
	
	for(int i = 0 ; i < graph[abba].sz ; i++){
		int node = graph[abba][i];
		if(parent[node] != -1){
			if(parent[abba] + 1 > parent[node]){
				child[abba] = child[node] + 1;
			}
		}
		else{
			parent[node] = parent[abba] + 1;
			dfs(abba,node);
			child[abba] = child[node] + 1;
		}
	}
	
}

int main()
{

	fasterIO;
	cin >> tc;
	while(tc--){
		int u , v;
		SET(parent,-1);
		++kase;
		parent[0] = 0 ;
		cin >> n;
		for(int i = 0 ; i < n ; i++){
			cin >> u >> v ;
			graph[u].pb(v);
		}
		for(int i = 1 ; i <= n ; i++){
			if(parent[i] != -1) continue;
			dfs(0,i);
		}
		
		int maxi = -1 , idx = 0;
		
		for(int i = 1 ; i <= n ; i++){
			if(child[i] > maxi){
				maxi = child[i];
				idx = i;
			}  
		}
		
		cout << idx << "\n";
		
	}
	
	return 0;
}

