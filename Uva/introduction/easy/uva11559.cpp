
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


	
	fasterIO ;
	
	int n , b , h , w ; 
	
	while(cin >> n >> b >> h >> w){
		
		
		int cost , p , ans = 10000000 ; 
		
		loop(i,0,h){
			
			cin >> p ;
			 
			int bed;
			bool canStay = 0 ; 
			
			loop(j,0,w){
				
				cin >> bed ; 
			
				if(bed >= n ) canStay = 1 ;
				
			}
			
			cost = p * n ;
			
			if(canStay && ( cost <= b ) ) {
				
				ans = min(ans,cost);
			}	
			
			
		}
		
		if(ans != 10000000 ) cout << ans << endl;
		else cout << "stay home\n";
			
		
		
	}
	
	
	
	
	return 0 ; 
}









