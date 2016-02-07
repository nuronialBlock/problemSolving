#include <bits/stdc++.h>

using namespace std;

#define sf scanf 
#define pf printf
#define pb push_back
#define vi vector<int>
#define all(v) v.begin(),v.end()

int maxi = 10000002;
bool isPrime[10000002];
vi primeList;

void sieve(){

	int srt = sqrt(maxi)+1;
	
	for(int i = 3 ; i <= srt ; i += 2){
		if(isPrime[i]){
			for(int j = i * i ; j <= maxi ; j += i + i){
				isPrime[j] = 0 ;
			}
		}
	}
	
}

bool check_prime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0 )return 0;
	else return isPrime[n];
}

void generate_prime(){
	
	memset(isPrime,1,sizeof isPrime);
	sieve();
	primeList.pb(2);
	for(int i = 3 ; i < maxi-1 ; i += 2){
		if(isPrime[i]) primeList.pb(i);
	}
	
}


int main()
{
	int n , lo , hi ;
	generate_prime();
	//for(int i = 0 ; i < 1000 ; i++) cout << primeList[i] << " ";
	while(sf("%d",&n) == 1 && n){
		
		int num = n , count = 0 ;
		lo = n + 1;
		vi ara;
		while(num != 0){
			count++;
			ara.pb(num%10);
			num /= 10;
		}
		hi = pow(10,count);		
		reverse(all(ara));
		
		int hiIdx = primeList.size()-1, loIdx = 0;
		
		bool got = false; 
		
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
		
		
		if(hiIdx == loIdx) {cout << 0 << "\n";continue;}
		
		int ans = 0;
		for(int i = loIdx ; i <= hiIdx ; i++){
			num = primeList[i];
			
			//cout << num << "\n";
			got = 1 ;
			ans = num;
			ara.clear();
			while(num != 0){
				ara.pb(num%10);
				num /= 10;
			}
			
			num = primeList[i];
			sort(all(ara));
			
			do{
				//reverse(all(ara));
				int k = 0; 
				int n1 = 0;
				while(k < ara.size()){
					n1 = n1 * 10 + ara[k];
					++k; 
				}
				//if(num == 919) cout << n1 << "\n";
				if(n1 % 2 != 1 || check_prime(n1) != 1) {got=0;ans=0;break;}
				//if(num == 919) cout << got << "\n";
			}while(next_permutation(all(ara)));
			if(got) break;
		}
		
		if(!ans) cout << 0 << "\n";
		else cout << ans << "\n";
	}
	
	return 0;
}










