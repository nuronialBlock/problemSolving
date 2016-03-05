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


bool cmp( const pii& p1 , const pii& p2){
	
	return p1.ss < p2.ss ;  
	
}




ll n , r , avg ; 

vpi v;  

int main(){

	fasterIO;
	
	cin >> n >> r >> avg ;
	
	ll need = 0 ; 
	
	
	loop(i,0,n){
		
		pii p1 ;
		
		cin >> p1.ff >> p1.ss ;
		
		need += p1.ff ; 
		
		
		v.pb(p1);
		
		
	}
	
	need = ( avg * n ) -  need ;
	

	sort(v.begin(),v.end(),cmp);
	
	ll count = 0 ; 
	
	if( need <= 0 ) {cout << 0 << endl; return 0 ; }
	
	for(int i = 0 ; i < n ; i++ ){
		
		if(v[i].ff >= r ) continue ; 
		
		ll mini = r - v[i].ff ; 
		ll x  = mini ; 
		
		if( need < mini ) x = need ;    
		
		count += (v[i].ss * x );
		
		need -= x ; 
		
		if(need == 0 ) break ;
		
		
	}


	cout << count << endl;

	return 0 ; 
}













