
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









int main()
{



	int n , m  , c , kase = 0 ; 
	
	
	while(cin >> n >> m >> c){
		
		if(!n && !m && !c) break;
		
		bool toogle[22];
		int ampire[22];
		
		int total = 0; 
		int maxi = 0 ; 
		
		SET(toogle,0);
		
		loop(i,1,n+1){
			
			cin >> ampire[i];
			
		}
		
		int k ; 
		
		loop(i,1,m+1){
			
			cin >> k ;
			if(!toogle[k]){
				
				toogle[k] = 1 ;
				total += ampire[k];
			}	
			
			else { toogle[k] = 0 ; total -= ampire[k]; }
			
			
			
			if( maxi >= 0 ) maxi = max(maxi,total);
			
			if(maxi > c ) {maxi *=-1 ; }
			
			
			
			
		}
		
		
		
		
		
		if(maxi < 0 ) printf("Sequence %d\nFuse was blown.\n\n",++kase);
		
		else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n\n",++kase,maxi);
		
	
	
	
	
	}
	
	
	
	
	
	
	
	return 0 ; 
}









