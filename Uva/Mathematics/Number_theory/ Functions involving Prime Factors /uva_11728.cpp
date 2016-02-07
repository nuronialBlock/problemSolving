/*
	uva_11728
	
*/


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
#define maxN 1002
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

bool marked[1005];
int precal[1005];
vi prime ;

void sieve(){
	
	SET(marked,1); // all are primes
	
	for(int i = 3 ; i * i <= 1002 ; i += 2 ){
		
		
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

	for(int i = 3 ; i  <= maxN ; i += 2 ){
		
		if(isPrime(i)) prime.pb(i);
		
	}


}



int factorized(int n ){
	
	int ans = 1; 
	int siz = prime.sz ;  
	
	for(int i = 0;  i  < siz && prime[i] * prime[i] <= n ; i++){
		
		if(n % prime[i] == 0){
			int power = 0 ;
			int mult = 1;
			int add = 1 ;  
			while(n%prime[i]==0){
				mult *= prime[i] ;
				add += mult ;
				n /= prime[i];
				
			}
			ans *= add ;
		}
		if(ans > 1000 ) break;
		
	}
	
	if( n != 1 ){
		
		ans *= (n+1) ;
		
	}
	
	if(ans>1000) ans = -1;
	
	return ans; 
	
}


int main()
{
	
	loadPrime();	


	int n , kase = 0 ; 
	
	precal[1] = 1 ;
	
	for(int i = 2 ; i < 1001 ; i++ ){
		precal[i] = factorized(i) ;
	}
	
	while(cin >> n ){
		
		if(!n) break;
		
		cout << "Case " << ++kase <<": ";
		
		bool got = 0 ;
		int ans = 0 ;
		for( int i = 1 ; i < 1001 ; i++ ){
			
			if( ( precal[i] == n) && !got ) { 
				got = 1;
				ans = i; 
			}
			else if( ( precal[i] == n ) && got ){
				ans = i ;
			}
		
		}
		if(got) cout << ans << endl;
		else cout << -1 << endl;
		
		
	}
	
	
	
	return 0 ; 
}

