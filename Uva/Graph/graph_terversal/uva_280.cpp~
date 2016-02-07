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
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
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

vi graph[107];
vi start;
int n , m , k ;
int visited[107];

void bfs(int srt){

	SET(visited,0);
	queue<int> q;
	q.push(srt);
	
	while(!q.empty()){
		
		int node = q.front(); q.pop();	
			
		for(int i = 0 ; i < graph[node].sz ; i++){
			int vertex = graph[node][i]; 
			if(!visited[vertex]){
				visited[vertex] = 1;
				q.push(vertex);
			}
		}
	
	}
	
}

int main()
{

	//fasterIO;
	
	while(cin >> n && n){
	
		while(cin >> m && m){
		
			//start.pb(m);
			while(cin >> k && k){
				graph[m].pb(k);
			}
			//continue;
		}
		
		int q;
		cin >> q; 
		
		loop(i,0,q){
			int strt;
			cin >> strt;
			vi ans;	
			bfs(strt);
			for(int j = 1 ; j <= n ; j++){
				if(!visited[j]){
					ans.pb(j);
				}
			}
		
			sort(all(ans));
			int siz = ans.sz;
			cout << siz ;
			for(int i = 0 ; i < siz ; i++){
				cout << " " << ans[i];
				//if(i == (siz - 1)) cout << "\n";
				//else cout << " ";
			}		
			cout << "\n";	
		}
		
		for(int i = 0 ; i < 105 ; i++) graph[i].clear();
	}
	return 0;	
}





















