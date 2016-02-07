// hasta la victoria siempre
// জয় বাংলা ! 


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
#define maxN 100005
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)


bool isPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;	
	if(n % 2 == 0) return 0;
	
	for(int i = 3 ; i * i <= n ; i += 2){
		if(n % i == 0) return 0;
	}
	
	return 1;
}

int main()
{
	fasterIO;
	
	int n;
	while(cin >> n){
		
		int tmp = (n/2) + 1 ;
		bool got = false;
		
		if(n % 2){
			cout << n << " is not the sum of two primes!\n";
			continue;
		}
		
		while( tmp > 1){
			if(!isPrime(tmp)){--tmp ; continue;}
			int tmp2 = n - tmp;
			if(isPrime(tmp2)){
				got = 1; 
				cout << n << " is the sum of "<< tmp2 <<" and " <<  tmp <<".\n";
				break;
			}			
			tmp--;
		}
		
			//cout << "Gotcha\n";
		if(!got) cout << n << " is not the sum of two primes!\n";
		
	}
	
	return 0;
}













