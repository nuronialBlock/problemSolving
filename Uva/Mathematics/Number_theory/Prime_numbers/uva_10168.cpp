// hasta la victoria siempre
// এবারের সংগ্রাম মুক্তির সংগ্রাম । এবারের সংগ্রাম,স্বাধীনতার সংগ্রাম । 


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
#define vd vector <double >
#define vb vector <bool >
#define vs vector <string >
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
#define maxN 10000006

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

bool marked[maxN+10];
vi primes;

void siv(){
	SET(marked,1);
	
	for(int i = 4 ; i <= maxN ; i += 2) marked[i] = 0;
	
	for(int i = 3 ; i * i <= maxN ; i += 2){
		if(marked[i]){
			for(int j = i * i ; j <= maxN ; j += i + i){
				marked[j] = 0;
			}
		}
	}
}


void genPrimes(){
	siv();
	primes.pb(2);
	marked[0] = marked[1] = 0 ;
	for(int i = 3 ; i <= 10000000 ; i += 2){
		if(marked[i]) primes.pb(i);
	}
	
}

void find(int n){
	int hi = primes.sz;
	for(int i = 0 ; i < hi ; i++){
		int num = n - primes[i];
		if(marked[num]){
			cout << primes[i] << " " << num << "\n";
			return;
		}
	}
	
}


int main()
{

	fasterIO;
	genPrimes();
	//cout << primes[primes.sz-1] << "\n";
	int n;
	while(cin >> n){
		
		if(n < 8) {cout << "Impossible.\n";continue;}
		else if( n % 2 == 0){
			cout << "2 2 " ;
			find(n-4);
		}
		else{
			cout << "2 3 ";
			find(n-5);
		}
	
	}
	
	return 0;
}

