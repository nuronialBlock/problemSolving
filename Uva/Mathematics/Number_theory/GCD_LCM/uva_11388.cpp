
/*
	
	uva_11388.cpp
	catagory_ GCD/LCM 
	
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
#define LCM(a,b) { ( a / GCD(a,b)) * b }

template <class T> 
T _pow( T x, T y){
	
	T ans = x ;
	
	for(T i = 2 ; i <= y ; i++ ) ans *= x ;
	
	return ans; 
}


/* Number Theory

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
	
	
	int count  = 0; 
	int siz = prime.sz ;  
	for(int i = 0;  i  < siz && prime[i] * prime[i] <= n ; i++){
		
		if(n % prime[i] == 0){
			count++;
			
			while(n%prime[i]==0){
				
				n /= prime[i];
			
			}
		
		}
		
	
	}
	
	if( n != 1 ){
		
		count++;
		
	}
	
	return count ; 
	
}


*/



int main()
{



	int tc ; 
	
	cin >> tc ;
	
	while(tc--){
	
		int gcd , lcm ;
		cin >> gcd >> lcm ;
		if( !(lcm%gcd) ) cout << gcd <<" " << lcm << endl;
		else cout << -1 << endl ; 
		
	
	}
	
	
	
	return 0 ; 
}









