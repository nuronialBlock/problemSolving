// write a code for Shaking the world

// write a code for Shaking the world

#include <bits/stdc++.h>

using namespace std;

#define ll long long int 
#define vi vector<int > 
#define vll vector<ll> 


#define pb push_back
#define sz size()

#define maxN 1000000

#define SET(a,n) memset(a,n,sizeof(a));

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) { ( GCD(a,b)/a ) * b }


vll prime ; 
bool ara[1000001];


bool isPrime(int i ){
	
	
	if(i < 2 ) return 0 ;
	else if( i == 2) return 1 ;
	else if( i % 2 == 0) return 0 ;
	else return ara[i]; 

}

void seive(){


	for(int i = 3 ;  i <= maxN ; i += 2 ){
		
		if(ara[i] == 1 ){
			
			for(int j = i*i ;  j <= maxN ; j += i + i ){
				
				ara[i] = 0 ;  // not prime
				
			}
			
		}
		
		
	}
	

}


void loadPrime(){
	
	prime.pb(2);
	
	for(int i = 3 ; i < maxN  ; i+=2  ){
		
		if(isPrime(i)) prime.pb(i) ;
		
	}


}


void factorized(ll num ){
	
	
	int siz = prime.sz;
	for(int i = 0 ; ( prime[i] * prime[i] <= num ) && i < siz; i++ ){
	
			while( (num % prime[i] ) == 0 ){
		
		
			printf("    %lld\n",prime[i]);
		
			num  /= prime[i]; 	
		
		}
		if( num ==1 ) break ;
		
	
	}
	
	if(num == 1 ) cout << endl;
	else printf("    %lld\n\n",num);
	
	
	
}



int main(){
	
		
	ll n ; 
	SET(ara,1);
	loadPrime();
	
	while( cin  >> n ){
		
		if(n<0) break ; 
		
		factorized(n) ;
		
	
	}
	
	return 0 ; 
}
