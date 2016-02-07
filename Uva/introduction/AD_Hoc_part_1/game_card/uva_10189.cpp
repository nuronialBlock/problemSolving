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

int x[] = {-1,-1,0,1,1,1,0,-1};
int y[] = {0,1,1,1,0,-1,-1,-1};

int main()
{

	fasterIO;
	
	
	int n , m ;
	int tc = 0 ;
	
	while(cin >> n >> m){
		
		if(!n && !m) break;
		
		char grid[n+2][m+2];
		int ans[n+2][m+2];
		
		memset(ans,0,sizeof ans);
	
		queue <pii> q; 
	
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ;  j < m ; j++){
				cin >> grid[i][j];
				if(grid[i][j] == '*'){
					pii p;
					p.ff = i;
					p.ss = j;
					q.push(p);
					ans[i][j] = -1;
				}
			}
		}
		
		while(!q.empty()){
			
			pii now = q.front();
			q.pop();
			for(int i = 0 ; i < 8 ; i++){
				if ( (now.ff + x[i] >= 0 && now.ff + x[i] < n) && (now.ss + y[i] >= 0 && now.ss + y[i] < m ) ){
					
					if(grid[now.ff + x[i]][now.ss + y[i]] == '.' ) ans[now.ff + x[i]][now.ss + y[i]]++;
					
				}
			}
			
		}
		
		if(tc) cout << "\n";
		cout << "Field #"<< ++tc << ":\n";
		for(int i = 0 ; i < n ; i ++){
			for(int j = 0 ;  j < m ; j++){
				if(ans[i][j] != -1)cout << ans[i][j];
				else cout << "*";	
			}cout << "\n";
		}
		
	
	}
	
	return 0;
}












