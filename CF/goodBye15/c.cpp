// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define pdd pair<double,double>
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

int main()
{

	fasterIO;

	//freopen("in.txt","r",stdin);
	int n , m , q ;
	cin >> n >> m;
	char graph[n+10][m+10];
	int row[n+10][m+10] , col[n+10][m+10];
	
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = 0; j < m; ++j)
		{
			/* code */
			cin >> graph[i][j];
		}
	}


	for (int i = 0; i < n; ++i)
	{
		/* code */
		row[i][0] = 0;
		for (int j = 1; j < m; ++j)
		{
			/* code */
			if(graph[i][j] == '.' && graph[i][j-1] == '.'){
				row[i][j] = row[i][j-1] + 1; 
			}
			else row[i][j] = row[i][j-1] ; 

		}
	}


	for (int i = 0; i < m; ++i)
	{
		/* code */
		col[0][i] = 0;
		for (int j = 1; j < n; ++j)
		{
			/* code */
			if(graph[j][i] == '.' && graph[j-1][i] == '.'){
				col[j][i] = col[j-1][i] + 1; 
			}
			else col[j][i] = col[j-1][i] ; 

		}
	}

	cin >> q ;

	for (int i = 0; i < q; ++i)
	{
		/* code */
		int a , b , c , d;
		cin >> a >> b >> c >> d;
		--a ; --b ; --c ; --d;
		LL ans = 0 ;
		for(int j = a ; j <= c ; j++){
			ans += (row[j][d] - row[j][b]);
		}

		for(int j = b ; j <= d ; j++){
			ans += (col[c][j] - col[a][j]);
		}
		cout << ans << "\n";
	}

	return 0;
}














