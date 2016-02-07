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

int n , tc , kase = 0 ;
vi graph[102];
bool matrix[102][102];
bool visited[102];

bool bfs(int target){
	if(!target) return 1;
	int src = 0 ;
//	bool visited[102];
	SET(visited,0);
	visited[src] = 1;
	queue<int> q;
	q.push(src);
	
	while(!q.empty()){
		int node = q.front(); q.pop();
		//if(node == target) return 1;
		for(int j = 0 ; j < graph[node].sz ; j++){
			if(graph[node][j] == target) return 1;
			if(visited[graph[node][j]] == 0){
				visited[graph[node][j]] = 1;
				q.push(graph[node][j]);
			}
		}		
	}
	
	return 0;
	
}

void noDom(int target){
	int src = 0 ;
	SET(visited,0);
	if(!target) return ;
	
	visited[src] = 1; visited[target] = 1;	
	queue<int> q;
	q.push(src);
	
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
	
	cin >> tc ;
	while(tc--){
		++kase;
		scanf("%d",&n);
		
		loop(i,0,101){
			graph[i].clear();
		}
		loop(i,0,n){
			int rel;
			loop(j,0,n){	
				scanf("%d",&rel);
				//adjMat[i][j] = rel;
				if(rel) graph[i].pb(j); 
			}
		}
		
		SET(matrix,0);
		//vi dominator[102];
		int nDom[102];
		loop(i,0,n){
			bool ret = bfs(i);
			if(!ret){
				nDom[i] = 0;
			}
			else nDom[i] = 1;
		}
		
		loop(i,0,n){
			if(!nDom[i]){
				loop(j,0,n) {
					matrix[i][j] = 0;
					matrix[j][i] = 0;
				}
			}
			else{
				noDom(i);
				visited[i] = 0;
				loop(j,0,n){
					if(!visited[j] && nDom[j]) matrix[i][j] = 1;
					else matrix[i][j] = 0; 	
				}
			}
		}
		
		printf("Case %d:\n",kase);
		
		loop(i,0,n){
			
			printf("+");
			loop(j,0,(2*n-1)){
				printf("-");
			}
			printf("+\n");
			printf("|");
			loop(j,0,n){
				
				if(matrix[i][j]) printf("Y|");
				else printf("N|");
			}
			printf("\n");
		}
		
		printf("+");
		loop(j,0,(2*n-1)){
			printf("-");
		}
		printf("+\n");
		
	}
	
	return 0;
}




















