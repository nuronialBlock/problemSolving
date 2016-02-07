// Status: solved

#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define vi vector<int>
#define mset(a,b) memset(a,b,sizeof a)
#define all(v) v.begin(),v.end()
#define LL long long 

const int maxi = 1000002;
const int srt = sqrt(1000002) + 1;

vi primeList;
bool isPrime[1000003];

void sieve(){
	
	for(int i = 3 ; i < srt ; i += 2){
		if(isPrime[i]){
			for(int j = i * i ; j < maxi ; j += i + i){
				isPrime[j] = 0 ;
			}
		}
	}
}

void generate_prime(){
	mset(isPrime,1);
	sieve();
	primeList.pb(2);
	for(int i = 3 ; i < maxi ; i+=2){
		if(isPrime[i]) primeList.pb(i);
	}
}


int main()
{
	generate_prime();
	int tc;
	cin >> tc;
	while(tc--){
	
		int lo, hi;
		cin >> lo >> hi ;
		LL loIdx = 0 , hiIdx = primeList.size()-1;
		//cout << primeList.size() << "\n";
		bool got = 0 ;	
		for(int i = 0 ; i < primeList.size() ; i++){
			if(primeList[i] >= lo){
				loIdx = i;
				break;
			}
		}
		for(int i = 0 ; i < primeList.size() ; i++){
			if(primeList[i] > hi ){
				hiIdx = i-1;
				break;
			}
		}
		
		//cout << loIdx << " " << hiIdx << "\n";
		
		vi ans;
		map<int,int> m;
		
		for(int i = loIdx ; i < hiIdx ; i++){
			int num = primeList[i+1]-primeList[i];
			m[num]++;
			if(m[num] == 1) ans.pb(num);
		}
		
		sort(all(ans));
		
		int maxx = 0 ;
		bool dup = 0;
		int out = -1;
		
		for(int i = 0 ; i < ans.size() ; i++){
			if(maxx == m[ans[i]]) dup = 1 ;
			else if(maxx < m[ans[i]]){
				maxx =  m[ans[i]];
				out = ans[i];
				dup = 0;
			}
		}
		//cout << m[6] << " " << m[2] << "\n";
		if(dup || out == -1) cout << "No jumping champion\n";
		else cout << "The jumping champion is " << out << "\n";
			
	}
	return 0;

}













