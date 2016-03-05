#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define ff first
#define ss second

#define ll long long 
#define ull unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpi vector <pii>
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
#define pb push_back
#define sz size()


#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string>
#define qi queue<int>
 

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

/** start **/





int n , m ; 

vector<int> graph[maxN];

vpi v ; 	

vi vnt[maxN] ; 
	
int visited[maxN];	

bool input[maxN];

int color [maxN];




bool cmpr( const pii& p1, const pii& p2  ){
	
	 return p1.ff != p2.ff ? p1.ff > p2.ff : p1.ss < p2.ss ; 

	
}


void graphSearch(int src,int end){

	SET(visited,-1);
	cout << "gone...";
	
	loop(i,1,end+1){
		
		if(input[i]){
		
			for(int j = 0 ; j < graph[i].size() ; j++ ){
			
				if(color[graph[i][j]] != color[i]) {
				
					if(visited[color[graph[i][j]]] < i ) {
					
						vnt[color[i]].pb(color[graph[i][j]]);
						visited[color[graph[i][j]]] = i ; 
					
					}
				
				}
			
			
			
			
			}	
		
		}
		
		
	}
	
	loop(i,1,10001){
		
		if(vnt[i].size() > 0 ){
			
			pii p ; 
			
			p.ff = vnt[i].size() ;  // size
			p.ss = i ; 
			
			v.pb(p);
			 
			
		}
		
	}
	
	
	
	
}






int main()
{

	fasterIO ; 
	

	cin >> n >> m ; 
	
	loop(i,1,n+1){
		
		cin >> color[i];
			
		
	}
	

	int x ;
	int y ; 
		
	loop(i,0,m){
		
		scanf("%d %d",&x,&y);
		
		if( !input[x] ) input[x] = 1 ; 
		
		if( !input[y] ) input[y] = 1 ; 
		
		
		graph[x].pb(y);
		graph[y].pb(x);
		
		
		
	}
	
	
//	
	graphSearch(1,n);
	
	
	sort(v.begin(),v.end(),cmpr);
	
	
	cout << v[0].ss <<endl;
	
	
	return 0 ; 
}









