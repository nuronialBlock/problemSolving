	
/*
	Uva_10680.cpp
	catagory_ working with prime factors
	
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
#define maxN 1000006
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



bool marked[1000006];

vi prime ;



void sieve(){
	
	SET(marked,1); // all are primes
	
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



int factorized(int n ){
	
	
	int numOfFive = 0; 
	int temp = n ;
	while(temp){
		
		temp /= 5 ;
		numOfFive++;
	
	}
	numOfFive--;
	int siz = prime.sz ;  
	LL ans = 1 ;
	
	for(int i = 0;  i  < siz && prime[i] * prime[i] <= n ; i++){
	
		if( prime[i] == 5 ) continue ;		
				 
		int count = 0 ;
		LL num = prime[i] ;
		temp = prime[i] ;
		
		while( num <= n ){
			num *= temp;
			count++;
		}
		
		count-- ;
		
		if(prime[i]==2){
			count -= numOfFive ; 
			ans *= _pow(2,count) ;
			continue;
		}
		
		else ans *= _pow(prime[i],count) ;
		
		ans %= 10 ;
	
	}
	
	
	
	return ( ans % 10 ); 
	
}




int main()
{



	int n ; 
	
	while(cin>>n){
		
		if(!n) break;
		
		int ans = factorized(n);
		
		cout << ans << endl;
	
	
	}
	
	
	return 0 ; 
}









