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

int n , m ;
int visited[2003][2003];
int graph[2003][2003];
int will_find;
vpii vn , vm , v;

int neg_x[]= {0,-1,0,1};
int neg_y[]= {-1,0,1,0};

queue <pii> q;
	
int BFS()
{	
	int ans = -1;
	while(!q.empty()){
		pii top = q.front(); q.pop();
		for(int i = 0 ; i < 4 ; i++){
			int X = top.ff + neg_x[i];
			int Y = top.ss + neg_y[i];
			if((X >= 0 && X <= 2000) && (Y >= 0 && Y <= 2000) && visited[X][Y] == -1){
				q.push(pii(X,Y));
				visited[X][Y] = visited[top.ff][top.ss] + 1;
				if(graph[X][Y] == will_find){
					ans = visited[X][Y];
					break;
				}
			}
		}
		if(ans != -1) break;
	}	
	
	while(!q.empty()) q.pop();
	
	return ans;
}


int main()
{
	fasterIO;
	while(cin >> n && n){
		
		pii p;	 
		SET(graph,0);	
		v.clear();
		vn.clear();
		vm.clear();
		SET(visited,-1);
		
		loop(i,0,n){
			cin >> p.ff >> p.ss;
			graph[p.ff][p.ss] = 1;
			vn.pb(p);
		}
		cin >> m;	 
		loop(i,0,m){
			cin >> p.ff >> p.ss;
			graph[p.ff][p.ss] = 2;
			vm.pb(p);
		}
		
		if(n < m) {will_find = 2; v = vn;}
		else {will_find = 1; v = vm;}
		
		int siz = v.sz;
		
		loop(i,0,siz){
			q.push(v[i]);
			visited[v[i].ff][v[i].ss] = 0;
		}
		int ans = BFS();
		cout << ans << "\n";
	}
	
	return 0;
}

















