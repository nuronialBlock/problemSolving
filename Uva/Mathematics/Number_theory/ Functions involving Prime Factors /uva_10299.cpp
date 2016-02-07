/*
	UVA_10299
	Euler Phi / Totient function
	FUnction involing Prime factors
		
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
#define maxN 1000000009
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


int phi( int n ){

	int ans = n ; 
	
	for( int i = 2 ; i * i <= n	 ; i++ ){
		
		if( !(n%i) ){
			
			while( !(n%i) ){
				n /= i;
			}
			
			ans -= ( ans / i ) ;
			
		}
	
	}
	
	if(n>1) ans -= ans / n ;
	
	return ans ;

}



int main()
{



	int n ; 
	
	while(cin >> n && n){
		
		if( n == 1 ) cout << 0 << endl;
		else cout << phi(n) << endl;
	
	}
	
	
	return 0 ; 
}









