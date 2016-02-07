/*
	Uva_10650
	prime Numbers
*/



// write a code for Shaking the world

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
#define vLL vector<LL>
#define pb push_back
#define sz size()
#define ALL(v) v.begin(),v.end()

#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

#define pq priority_queue
#define maxN 32009
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) { ( GCD(a,b)/a ) * b }

template <class T> 
T _pow( T x, T y){
	
	T ans = x ;
	
	for(T i = 2 ; i <= y ; i++ ) ans *= x ;
	
	return ans; 
}


bool marked[32010];
vi prime ;
int x = 0 ; 
int ans[32000][4];



void sieve(){
	
	SET(marked,1); // all are primes
	
	
	for(int i = 3 ; i * i <= maxN ; i += 2 ){
		
		
		if(marked[i]){
		
			for(int j = i*i ; j <= maxN ; j += i + i ){
			
				marked[j] = 0 ; 
			
			}
		
		
		}
			
		
	}
	
	
	
	
	
}


bool isPrime(int n ){
	
	if( n < 2 ) return 0 ; 
	else if(n == 2 ) return 1 ;
	else if( n % 2 == 0 ) return 0;
	
	return marked[n];

}

void loadPrime(){
	
	sieve();
	
	prime.pb(2);

	for(int i = 3 ; i <= maxN ; i += 2 ){
		
		if(isPrime(i)) prime.pb(i);
		
	}
	
	int siz = prime.sz ; 
	
	bool alreadyAppeared = false ;
	
	for(int i = 0 ;  i < siz ; i++ ){
		
		
		int a = prime[i+1] - prime[i];
		int b = prime[i+2] - prime[i+1];
		int c = prime[i+3] - prime[i+2];
		
		if( c == b && c == a ){
			
			ans[x][0] = prime[i];
			ans[x][1] = prime[i+1];
			ans[x][2] = prime[i+2];
			ans[x][3] = prime[i+3];
			
			alreadyAppeared = true ;
			x++;
			
		}
		
		
		else if( a == b ){
			
			if(alreadyAppeared){ 
				alreadyAppeared =false; 
				continue;	
			}
			
			ans[x][0] = prime[i];
			ans[x][1] = prime[i+1];
			ans[x][2] = prime[i+2];
			ans[x][3] = prime[i+2];
			
			
			
			x++;
			 
			
		}
		
		
		
	}

}




int main()
{


	loadPrime();
	
	int n , m  ; 
	
	
	while( cin >> n >> m ){
		
		if( !n && !m ) break;
		
		int X , Y ; 
		
		X = min(n,m);
		Y = max(n,m);
		
		for(int i = 0 ; i < x ; i++ ){	
			
			if( ans[i][0] >= X && ans[i][3] <= Y ){
				
				if(ans[i][3] == ans[i][2]){
					cout << ans[i][0] <<" " << ans[i][1] << " " << ans[i][2] <<endl;
				}
				else cout << ans[i][0] <<" " << ans[i][1] << " " << ans[i][2] << " " << ans[i][3] << endl;
			
			}
			
		}
		
		
	}
	
	
	return 0 ; 
}









