/*
	
	uva_993
*/

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
#define all(v) v.begin(),v.end()

#define mii map<int , int >
#define mdd map<double,double>
#define msi map<string,int>
#define mis map<int , string> 

#define pq priority_queue
#define maxN 1000000000
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




vi ans ; 

int main(){
	
	
	
	int tc ; 
	cin >> tc ;
	
	while(tc--){
		
		ans.clear();
		int num  ;
		
		cin >> num ;
		
		if(num / 10 == 0 ) {cout << num << endl; continue;}
		
		
		for(int  i = 9 ; i > 1 ; i-- ){
			
			if( num % i == 0 ){
				
				num /= i ;
				
				ans.pb(i);
			
			}
			
		
		}
		
		if(num != 1 ) cout << -1 << endl ;
		else{
			
			sort(all(ans));
			
			
			loop(i,0,ans.sz) cout << ans[i];
			cout << endl;
		
		}
		
		
	}
	

	return 0 ; 

}





