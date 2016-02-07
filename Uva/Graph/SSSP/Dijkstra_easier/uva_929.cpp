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

int n , m , tc; 
int cost[1009][1009];
int dest[1009][1009];
int ax[] = {0,-1,0,1};
int ay[] = {-1,0,1,0};


class node{

public:
	
	int r , c , w;
	node(int a , int b , int cc){r = a ; c = b ; w = cc;}
	
	bool operator < (const node& p) const{
		return p.w < w;
	}
	
};

int dijkstra(){
	
	loop(i,0,1001){
		loop(j,0,1001){
			dest[i][j] = 500000000;
		}
	}
	dest[0][0] = cost[0][0];
	PQ <node> pq;
	pq.push(node(0,0,0));
	
	while(!pq.empty()){
		node u = pq.top(); pq.pop();
		if(u.r == n && u.c == m) return dest[n][m];
		for(int i = 0 ; i < 4 ; i++){
			int X = u.r + ax[i];
			int Y = u.c + ay[i];		
			if( (X >= 0 && X <= n) && (Y >= 0 && Y <= m) ){
				
				if(dest[u.r][u.c] + cost[X][Y] < dest[X][Y]){
					dest[X][Y] = dest[u.r][u.c] + cost[X][Y];
					pq.push(node(X,Y,dest[X][Y]));
				}
			}
			
		}
		
	}
}

int main()
{

	fasterIO;
	cin >> tc;
	while(tc--){
		SET(cost,0);
		cin >> n >> m;
		loop(i,0,n){
			loop(j,0,m){
				cin >> cost[i][j];
			}
		}
		--n;--m;
		int res = dijkstra();	
		cout << res << "\n";
	}	
		
	return 0;
}












