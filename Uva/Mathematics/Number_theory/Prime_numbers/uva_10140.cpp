// hasta la victoria siempre

#include <bits/stdc++.h>

using namespace std;

#define pii pair<int , int >
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
#define maxX **
#define maxY ***
#define maxx *****
#define mod 100000000

#define SET(a,n) memset(a,n,sizeof(a));

#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

#define pLL pair<LL,LL>
#define vLL vector <LL >
// loops 
#define loop(i,a,n) for(int i = a ; i < n ; i++ )
#define rloop(i,a,n) for(int i = a ; i > n ; i-- )
#define fasterIO ios::sync_with_stdio(0)

const LL maxN  = 2147483649;
bool marked[100009];
int srt = 100005;
LL l , u ;	

void siv(){
	SET(marked,1); // all are primes
	for(int i = 3 ; i * i <= srt ; i += 2){
		if(marked[i]){
			for(int j = i * i ; j <= srt ; j += i + i){
				marked[j] = 0; 
			}
		}
	}
}

vi primes;

void loadPrime(){
	siv();
	primes.pb(2);
	for(int i = 3 ; i <= srt ; i += 2){
		if(marked[i]) primes.pb(i);
	}
}

vLL segmentedSiv(int hiIdx){
	map<LL,bool> m1;
	for(int i = 0 ; i <= hiIdx ; i++){
		LL val = (l/primes[i]);
		LL j;
		if(l % primes[i]) j = (val + 1) * primes[i]; 
		else j = val * primes[i];
		if(j == primes[i]) j = primes[i] * 2;
	
		for( ; j <= u ; j += primes[i]){
			if(!m1[j] ) m1[j] = 1;
		}
	}
	
	vLL ret;
	if(l == 1) l++;
	for(LL i = l ; i <= u ; i++){
		if(!m1[i]) ret.pb(i); 
	}
	return ret;
}

int main()
{
	fasterIO;
	loadPrime();
	
	/*
	cout << "1 2 ";
	for(int i = 3 ; i < 100000 ; i += 2){
		if(marked[i]) cout << i << " ";
	}cout << "\n";
	*/
	
	while(cin >> l >> u){
		LL hi = sqrt(u+1);
		LL idx = primes.sz;
		for(LL i = 0; i < primes.sz ; i++){
			if(primes[i] > hi){
				idx = i-1;
				break;
			}
			else if(primes[i] == hi){
				idx = i;
				break;
			}
		}
		
		vLL longPrimes = segmentedSiv(idx);
		
		if(longPrimes.sz < 2) {
			cout << "There are no adjacent primes.\n";
			continue;
		}
		
		LL mini = 10000006 ;
		pLL ans1 = make_pair(0,0);
		for(LL i = 1 ; i < longPrimes.sz ; i++){
			LL temp = longPrimes[i] - longPrimes[i-1];
			if(mini > temp){
				mini = temp;
				ans1 = make_pair(longPrimes[i-1],longPrimes[i]);
			}
		}
		
		LL maxi = 0 ;
		pLL ans2 = make_pair(0,0);
		for(LL i = 1 ; i < longPrimes.sz ; i++){
			LL temp = longPrimes[i] - longPrimes[i-1];
			if(maxi < temp){
				maxi = temp;
				ans2 = make_pair(longPrimes[i-1],longPrimes[i]);
			}
		}
		
		cout << ans1.ff << "," << ans1.ss << " are closest, ";
		cout << ans2.ff << "," << ans2.ss << " are most distant.\n";
		
	}
	
	return 0;
}

