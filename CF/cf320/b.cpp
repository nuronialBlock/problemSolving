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

int main()
{

	fasterIO;
	
	int n , m;
	vi v;
	cin >> n;
	n *= 2;
	bool visited[n+10];
	map<int,pii> m1;
	int ans[n+10];
	for(int i = 2 ; i <= n ; i++){
		for(int j = 1 ; j < i ; j++){
			int val;
			cin >> val;
			v.pb(val);
			m1[val] = pii(j,i);
		}
	}
	
	sort(rall(v));
	SET(visited,0);
	
	for(int i = 0 ; i < v.sz ; i++){
		
		int x = m1[v[i]].ff ;
		int y = m1[v[i]].ss;
		
		if(!visited[x] && !visited[y]){
			visited[x] = visited[y] = 1;
			ans[x] = y;
			ans[y] = x;
		}
	}
	
	for(int i = 1 ; i <= n ; i++){
		cout << ans[i] << " ";
	}
	
	cout << "\n";
	
	return 0;
}

















