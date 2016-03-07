// hasta la victoria siempre
// Joy Bangla!


#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
#define pLL pair<LL,LL>
#define psi pair<string, int>
#define ff first
#define ss second

#define LL long long 
#define uLL unsigned long long

#define vi vector<int > 
#define vc vector<char > 
#define vpii vector <pii>
#define vpsi vector<psi>
#define vd vector <double>
#define vb vector <bool>
#define vs vector <string>
#define vLL vector <LL >
#define pb push_back
#define sz size()


#define mii map<int,int>
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 
#define mLL map<LL,LL>
#define mLi map<LL,int>
#define miL map<int,LL>
#define mci map<char,int>

#define pq priority_queue
#define maxN 1000006
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a))

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

bool marked[1000006];
vLL prime ;


void sieve(){
	SET(marked,1); // all are primes
	int sqrtN = maxN;
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
	for(int i = 3 ; i < maxN ; i += 2 ){
		if(isPrime(i)) prime.pb(i);	
	}
}




int main()
{

	fasterIO;
	loadPrime();
	LL n ;
	cin >> n ;
	
	vLL ans;
	for(int i = 0 ; prime[i] * prime[i] <= n && i < prime.sz ; i++){
		if(n % prime[i] == 0){
			ans.pb(prime[i]);
			while(n % prime[i] == 0){
				n /= prime[i];
			}
		}
	}
	
	if(n != 1) ans.pb(n);
	
	LL ret = 1;
	for(int i = 0 ; i < ans.sz ; i++) ret *= ans[i];
	
	cout << ret << "\n";
	
	return 0;
}

















