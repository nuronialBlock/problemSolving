
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



int ara[1003][1003];




int main()
{


	fasterIO ; 

	
	int n , m , k  ; 
	
	
	while(cin >> n >> m >> k ){
			
		SET(ara,0);
		
		int got = 0 ; 
		
		int i1 , j ;
		
		loop(i,0,k){
			
			cin >> i1 >> j ; 
			
			int sqr = 0 ;
			
		
		
			ara[i1][j] = 1 ;
				
			if( ara[i1-1][j] && ara[i1-1][j-1] && ara[i1][j-1] ){
				
				sqr++;			
				
			}		
			
			if( ara[i1][j-1] && ara[i1+1][j-1] && ara[i1+1][j] ){
				
				sqr++;			
				
			}		
			
			if( ara[i1-1][j] && ara[i1-1][j+1] && ara[i1][j+1] ){
				
				sqr++;			
				
			}		
			
			if( ara[i1+1][j] && ara[i1][j+1] && ara[i1+1][j+1] ){
				
				sqr++;			
				
			}		
			
			
			
			
			
			if(sqr && !got ) got = i+1 ; 
			
			
		}	
		
		cout << got << endl;
		
		
	
	}
	
	
	return 0 ; 
}









