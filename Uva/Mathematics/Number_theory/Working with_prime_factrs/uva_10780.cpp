/*

	uva_10780
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
#define maxN 10001
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


/* Number Theory
*/

bool marked[101];
vpi needPowers ;
vi prime ;


void sieve(){
	
	SET(marked,1);  //all are primes
	
	int sqrtN = sqrt(maxN);
	
	for(int i = 3 ; i * i <= sqrtN ; i += 2 ){
		
		
		if(marked[i]){
		
			for(int j = i*i ; j <= sqrtN ; j += i + i ){
			
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

	for(int i = 3 ; i * i <= maxN ; i += 2 ){
		
		if(isPrime(i)) prime.pb(i);
		
	}


}



void factorized(int n , int flag ){
	
	
	int siz = prime.sz ;  
	
	for(int i = 0;  i  < siz && prime[i] * prime[i] <= n ; i++){
		
		if(n % prime[i] == 0){
			
			int count = 0 ; 		
			
			while( n % prime[i] == 0 ){
				
				n /= prime[i] ;
				count++ ;
						
			}
			
			
			
			pii p1 ; 
			p1.ff = prime[i] ; 
			p1.ss = count ;
			
			needPowers.pb(p1);	
			
			 
		
		}
		
	
	}
	
	if( n != 1 ){
		
		pii p1 ; 
		p1.ff = n ; 
		p1.ss = 1 ;
				
		
		needPowers.pb(p1) ; 
		
	}
	

	
}


int main()
{

	loadPrime();

	int n , kase = 0 ; 
	
	cin >> n ;
	
	while(n--){
	
		int m , n ; 
		
		needPowers.clear();
		
		cin >> m >> n ;
		
		factorized(m,1) ;
		
		int siz = needPowers.sz; 
		
		int ans ; 
		
		for(int i = 0 ; i < siz ; i++ ){
			
			int count = 0 , num = needPowers[i].ff ; 
			
			while( num <= n ){
				
				count += n / num ; // how much power I am going to have 
				
				num *= needPowers[i].ff	;
					
			}
			
			count /= needPowers[i].ss ;  // max power I can use 
			
			if(i)ans = min(count,ans);
			else ans = count ; 
			
		}
		
		if(ans) printf("Case %d:\n%d\n",++kase,ans);
		else printf("Case %d:\nImpossible to divide\n",++kase);
	
	}	
	
	
	return 0 ; 
}









