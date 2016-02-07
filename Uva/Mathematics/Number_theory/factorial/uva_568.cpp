
/*
	uva_568
	
	catagory: Bigmod ,factorial problems 
	

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


int main()
{



	int n ; 
	
	
	while( cin >> n ){
	
		
		int needSpace = 5 ; 
		int curNum = n ; 
		
		while(curNum != 0 ){
			
			curNum /= 10 ;
			needSpace --;
			
		}
		
		if(!n) needSpace = 1 ; 
		
		for(int i = 0 ; i < needSpace ; i++ ) cout<<" ";
		
		cout << n <<" -> ";
		
		
		if( n == 0 || n == 1 ) {cout << 1 << endl; continue ; } 
		if( n == 2 ) {cout<<2<<endl; continue; }
		
		
		LL numOftwo =  1 ;
		LL numOffive = 0  ;
		LL ans = 1 ;
		
		for(int i = n ;  i >= 3 ; i-- ){
			
			int num = i ;
			
			while( num % 2 == 0 ){
				
				num /= 2 ;
				numOftwo++;
				
			}
			
			while( num % 5 == 0 ){
				
				num /= 5 ;
				numOffive++;
				
			}
			
			ans = ( ans * num ) % 10  ;
		
		}
		
		numOftwo -= numOffive ; 
		
		for(int i = numOftwo ; i > 0 ; i--){
			
			ans = ( ans * 2 ) % 10 ; 
		
		}
		
		
		cout << ans << endl;
		
	
	}
	
	
	return 0 ; 
}









