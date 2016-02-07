
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

ll tc , n1 , n2 ; 

vi primes;
bool marked[100000];






void sieve(){
	
	
	ll n = 1000000000;
	ll sqrtn = sqrt(n);
	
	for(ll i = 3; i * i <= sqrtn; i+=2 ){
		
		
		if(marked[i]){
			
			for(int j = i*i ; j <= sqrtn ; j+= i + i ){
			
				marked[j] = 0 ; 
							
			}
		
		
		}
		
	}	
	
	
	
} 


bool isPrime(ll num){
	
	return marked[num];
	

}



void loadPrime(){
	
	sieve();
	
	primes.pb(2);
	
	for(int i = 3; i * i <= 1000000000 ; i+=2 ){
		
		if(isPrime(i)) primes.pb(i);
	
	}
	
	

}

ll factorized(ll num ){
	
	ll divisor = 1 ;
	bool got = 0 ;
	if(num == 6 ) got =1 ; 
	
	for(int i = 0; i < primes.size() && (primes[i] * primes[i] <= num) ; i++ ){
	
		if( num % primes[i] == 0 ){
			int powers = 1 ;
			while( num % primes[i] == 0 ){
				powers++; 
				num /= primes[i];
			
			}
	
			divisor *= powers ; 
		}
		
		if(num ==1 ) break ;
	}
	
	if(num !=1 ) {
		divisor *= 2 ;
	}
	
	return divisor ;
}



int main()
{

	
	
	SET(marked,1); // all num's are primes 
	loadPrime();
	int siz = primes.sz;
	//loop(i,0,siz) cout << primes[i] <<endl;
	
	cin >> tc ;
	
	while(tc--){
		
		cin >> n1 >> n2 ;
		
		ll num = n1 , noDiv = 0; 
	
		for(ll i = n1 ; i <= n2 ; i++){
			
			ll divisors = factorized(i);  
			
			if(divisors > noDiv ) {
				
				noDiv = divisors ;
				num = i ;
			}
			
			
		
		}
		
		
		string  ch = ", ";
		cout << "Between "<<n1<<" and "<< n2<<ch<<num<<" has a maximum of "<<noDiv<<" divisors.\n";
	
	}
	
	
	return 0 ; 
}


