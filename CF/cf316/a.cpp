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

bool comp(pair<int,LL> p1 ,pair<int,LL> p2){
	
	if(p1.ss != p2.ss) return p1.ss > p2.ss;
	else return p1.ff < p2.ff;
}


int main()
{

	fasterIO;
	int n , m;
	cin >> n >> m ;
	
	vector< pair<int,LL> > v[105];
	
	for(int i = 0 ; i < m ; i++){
	
		for(int j = 0 ; j < n ; j++){
			LL num;
			cin >> num;
			pair<int,LL> p;
			p.ff = j;
			p.ss = num;
			v[i].pb(p);
		}
	}
	
	map<int,int> m1;
	vi v1;
	for(int i = 0 ; i < m ; i++){
		sort(v[i].begin(),v[i].end(),comp);
		int ans = v[i][0].ff;
		m1[ans]++;
		if(m1[ans] == 1) v1.pb(ans);
	}
	
	sort(v1.begin(),v1.end());
	int ans = 0;
	int idx = 0;
	for(int i = 0 ; i < v1.size() ; i++){
		if(ans < m1[v1[i]]){
			ans = m1[v1[i]];
			idx = v1[i];
			//cout << ans+1 << "\n";
		}
	}
	
	
	cout << idx+1 << "\n";
	
	return 0;
}




















