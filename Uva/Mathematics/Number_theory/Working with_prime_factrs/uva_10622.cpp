/*

	uva_10622
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

bool marked[100005];
vLL prime ;


void sieve(){
	
	SET(marked,1);  //all are primes
	
	int sqrtN = 100001;
	
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

	for(LL i = 3 ; i <= 100005 ; i += 2 ){
		
		if(isPrime(i)) prime.pb(i);
		
	}


}



LL factorized(LL n ){
	
	
	LL siz = prime.sz ;  
	LL ans = -1 ; 
	
	for(LL i = 0;  i  < siz && prime[i] * prime[i] <= n ; i++){
		
		if(n % prime[i] == 0){
			
			LL count = 0 ; 		
			
			while( n % prime[i] == 0 ){
				
				n /= prime[i] ;
				count++ ;
						
			}
			
			if( ans == -1 ) ans = count ;
			else{
				
				ans = GCD(count,ans);
				
			}
			
			 
		
		}
		
	
	}
	
	if( n != 1 ){
		
		ans = 1 ; 
		
	}
	
	
	return ans;

	
}


int main()
{

	loadPrime();

	LL n ; 
	
	
	while(cin >> n ){
	
		if(!n) break; 
		
		LL ans = factorized(abs(n)) ;		
		
		if(n<0){
			
			while( ans % 2 == 0 ){
				
				ans /= 2LL;
			
			}
			
		}
		
		cout << ans << endl;
	
	}	
	
	
	return 0 ; 
}









