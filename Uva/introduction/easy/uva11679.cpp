
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



int n , b , c , d , v ; 


int debt[25];
	
int reserve[25];

int main()
{


	
	
	while(cin >> b >> n){
		
		if(!b && !n ) break;
		
		SET(debt,0);
		SET(reserve,0);
	
		
		loop(i,0,b) cin >> reserve[i]; 
		
		loop(i,0,n){
			
			cin >> d >> c >> v ; 
			
			debt[d-1] += v ;
			
			reserve[c-1] += v; 
			
			
		}
		
		bool recoverable = 1 ; 
		
		loop(i,0,b){
			
			if(debt[i] > reserve[i]) recoverable = 0 ;
			
		}
		
		
		if(recoverable) cout << 'S' <<endl;
		else cout << 'N' <<endl;
		
	
	
	}	
	
	
	
		
	
	
	return 0 ; 
}









