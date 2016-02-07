
// write a code for Shaking the world

// write a code for Shaking the world

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


#define GCD(a,b) __gcd(a,b)
#define LCM(a,b) { ( GCD(a,b)/a ) * b }


vi prime ; 
bool printed = 0 ;
string sign = " x "; 

bool isPrime(int i ){
	
	if( i < 2 ) return 0 ; 
	
	else if( i == 2 ) return 1 ; 
	
	else if( i % 2 == 0 ) return 0 ;
	
	else {
		
		
		for(int j = 3 ; j * j <= i ; j += 2 ){
			
			if( i % j == 0 ) return 0 ; 
			
			
		}
	
		
	}
	
	
	return 1; 


}


void loadPrime(){
	
	prime.pb(2);
	int limit = 2147483647 ;
	int sqrtn = sqrt(limit);

	for(int i = 3 ; i <= sqrtn  ; i+=2  ){
		
		if(isPrime(i)) prime.pb(i) ;
		
	}


}


void factorized(int num ){
	
	int sqrtn = sqrt(num);
	
	for(int i = 0 ; i < prime.size() && prime[i] <= sqrtn ;i++ ){
		
		if( num % prime[i] == 0 ){
			
			int power= 0 ;
		
			while( num % prime[i] == 0 ){
				
				power ++; 
				
				if(printed) cout << sign << prime[i];
				
				else {cout << prime[i] ; printed =1 ; }
				
				
				num /= prime[i];			
					
			}
			
			sqrtn = sqrt(num);	
			
		}
		
		
	}
	
	if( num != 1 && printed ) cout << sign << num <<endl;
	else if(num != 1 && !printed) cout << num << endl ;
 	else cout << endl ;

}



int main(){
	
		
	int n ; 
	
	loadPrime();
	
	while( cin  >> n ){
		
		if(!n) break ; 
		
		printed = 0 ;
		
		cout << n << " = ";
		
		if( n < 0 ) { n *= -1 ; cout << -1 ; printed = 1; } 
		
		factorized(n) ;
		
	
	}
	
	return 0 ; 
}

