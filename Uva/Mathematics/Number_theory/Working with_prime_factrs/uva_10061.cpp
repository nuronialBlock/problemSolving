/*
	uva_10061
	
	catagory: working with prime factors
	

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


#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) { ( GCD(a,b)/a ) * b }

template <class T> 
T _pow( T x, T y){
	
	T ans = x ;
	
	for(T i = 2 ; i <= y ; i++ ) ans *= x ;
	
	return ans; 
}

bool marked[100009] ; 
vLL prime ; 
vpi prime_factorize;

void sieve(){
	
	SET(marked,1) ;
	
	for(LL i = 3 ; i * i < maxN ; i += 2 ){
		
		if(marked[i]){
		
			for(LL j = i * i  ; j < maxN ; j += i + i  ){
				
				marked[j] = 0 ; 	
				
			}
		}
	}
	

}

void loadPrime(){
	
	sieve();
	
	prime.pb(2);
	
	for( LL i = 3 ; i < 100001 ; i += 2 ){
		
		if( marked[i] ) prime.pb(i);  
	
	}
	

}

void factorized( int n ){
	
	int siz = prime.sz ;
	
	prime_factorize.clear();
	
	for( int i = 0 ; ( i < siz ) && ( prime[i] * prime[i] <= n ) ; i++ ){
	
		if(n % prime[i] == 0 ){
			int count = 0 ; 	
			while( n % prime[i] == 0 ){
			
				count ++ ;
				n /= prime[i] ;				
		
			}
		
			pii p1 ; 
			p1.ss = count ; 
			p1.ff = prime[i] ;
			
			prime_factorize.pb(p1) ; 
		}
	}
	
	if( n != 1 ){
		
		pii p1 ;
		p1.ss = 1 ;
		p1.ff = n ;
		
		prime_factorize.pb(p1);
	
	}

}


int main()
{
	
	loadPrime();
	

	int n , base ; 
	
	while( cin >> n >> base ){
		
		
		// trailling zeroes
		
		factorized(base);
		
		int siz = prime_factorize.sz ;
		
		LL ans = 9999234567890 ;	
		
		for( int i = 0 ; i < siz ; i++ ){
			
			int count = 0 ;
			
			int num = prime_factorize[i].ff;
			int div = num ; 
			
			while( div <= n ){
				
				count += n / div ;
				
				div *= num ; // mot kotota number oi number e factorized hishebe ache
			
			}
			
			count /= prime_factorize[i].ss ; // kototgula number xtra cover kortese  
			
			if(ans > count ) ans = count ;
		
		}
		
		cout << ans <<" ";
		
		
		// 1st part end here 
		
		//2nd part
		
		double numOfDigit = 0 ;
		
		for(int i = 1 ; i <= n ; i++ ){
		
			numOfDigit +=  ( log(i) / log(base) )  ; 
		
		}
		
		int digits = (int) floor(numOfDigit) ; 
		
		if(!n) cout << 1 << endl ;
		else cout << digits + 1  << endl ;
 		
	
	}

	return 0 ;

}











