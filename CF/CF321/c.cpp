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

bool visited[100005];
vi totCat;
bool cat[100005];
vi graph[100005];
int n , m ;

void dfs(int idx , int hasCat ,int maxi){
	
	int siz = graph[idx].sz;
	bool flag = 1 ;
	loop(i,0,siz){
		int node = graph[idx][i];
		if(!visited[node]){
			flag = 0;
			break;
		}
	}
	if(flag){	
		maxi = max(maxi,hasCat);
		totCat.pb(maxi);
		return;
	}
	
	for(int i = 0 ; i < siz ; i++){
		int node = graph[idx][i];
		if(!visited[node]){
			int pass = cat[node-1];
			if(!pass){
				pass = 0;
				maxi = max(maxi,hasCat);
			}
			else pass += hasCat;
			visited[node] = 1;
			dfs(node,pass,maxi);
		}
			
	}
	
	
	return;
}

int main()
{

	fasterIO;
	
	cin >> n >> m; 
	loop(i,0,n) cin >> cat[i];
	loop(i,0,n-1){
		int u , v;
		cin >> u >> v;
		graph[u].pb(v);
		graph[v].pb(u);
	}
	SET(visited,0);
	visited[1] = 1;
	dfs(1,cat[0],cat[0]);
	int ans = 0;
	int siz = totCat.sz;
	for(int i = 0 ; i < siz ; i++){
		if(totCat[i] <= m) ans++;
	}
	
	cout << ans << "\n";
	
	return 0;
}


